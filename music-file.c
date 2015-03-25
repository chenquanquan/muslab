/*
 *       Filename:  music-file.c
 *
 *    Description:  The music script file operation.
 *
 *
 *         Author:  chenchacha, 
 *        Created:  03/24/2015 09:36:13 PM
 */
#include <stdio.h>
#include "music-file.h"

FILE *mfile;
/* open_music_file - 
 *
 */
void open_music_file(void)
{
    mfile = fopen(MUSIC_SCRIPT_FILE, "r");

    return;
} /* -----  end of function open_music_file  ----- */

/* close_music_file - 
 *
 */
void close_music_file(void)
{
    fclose(mfile);
    return;
} /* -----  end of function close_music_file  ----- */

/* read_music_file - 
 *
 */
int read_music_file(struct music_note *note)
{
    //return fgetc(mfile);
    return fscanf(mfile, "%c,%d,%d,%d;", (char *)&note->pitch, &note->level, &note->delay, &note->symbol);
} /* -----  end of function read_music_file  ----- */

