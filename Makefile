#The doc is from:
# http://www.alsa-project.org/alsa-doc/alsa-lib/
# http://www.alsa-project.org/main/index.php/Main_Page
COMPILE ?= 
CC := $(COMPILE)gcc
LD := $(COMPILE)ld
OBJDUMP := $(COMPILE)objdump
LD_FLAG := -lm -lc  -lasound
CC_FLAG := $(LD_FLAG)
LD_INC += /usr/include/alsa

# compile object
objs += main.o
#objs += pcm_min.c
#objs += pcm.o

muslab.bin: $(objs)
	$(CC) -oS -o $@ $(objs) $(LD_FLAG) 
	$(OBJDUMP) -d $@ > $@.asm

%.o:%.c
	$(CC) -Wall $(CC_FLAG) -c $<

tag:
	echo -e "!_TAG_FILE_SORTED\t2\t/2=foldcase/" > filenametags
	find . -not -regex '.*\.\(png\|gif\)' -type f -printf "%f\t%p\t1\n" | sort -f >> filenametags
	ctags -R
	find $(pwd) -name "*.h" -o -name "*.c" -o -name "*.cc" -o -name "*.cpp" -o -name "*.[Ss]" -o -name "*.java" > cscope.files
	find $(LD_INC) -name "*.h" -o -name "*.c" -o -name "*.cc" -o -name "*.cpp" -o -name "*.[Ss]" -o -name "*.java" >> cscope.files
	cscope -qbkv -i cscope.files

.PHONY:clean
clean:
	rm -rf *.o *.bin *.asm a.out

distclean:
	rm -rf *.o *.bin *.asm tags cscope.* *.files
	rm -rf Session.vim vim.viminfo filenametags *.dat
