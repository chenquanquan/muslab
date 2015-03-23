/*
 *       Filename:  main.c
 *
 *    Description:  Play music
 *
 *         Author:  chenchacha, 
 *        Created:  03/22/2015 10:29:32 PM
 */
#include <stdio.h>
#include <alsa/asoundlib.h>

static char *device = "default"; /* playback device */
snd_output_t *output = NULL;
unsigned char buffer[16*1024*10]; /* some random data */
/* main - Entry
 *
 */
int main(int argc, char *argv[])
{
    int err;
    unsigned int i;
    snd_pcm_t *handle;
    snd_pcm_sframes_t frames;
    unsigned int input = 0xff;


    if ((err = snd_pcm_open(&handle, device, SND_PCM_STREAM_PLAYBACK, 0)) < 0) {
        printf("Playback open error: %s\n", snd_strerror(err));
        exit(EXIT_FAILURE);
    }
    if ((err = snd_pcm_set_params(handle,
                    SND_PCM_FORMAT_U8,
                    SND_PCM_ACCESS_RW_INTERLEAVED,
                    1,
                    48000,
                    1,
                    500000)) < 0) { /* 0.5sec */
        printf("Playback open error: %s\n", snd_strerror(err));
        exit(EXIT_FAILURE);
    }

    while (input != 0) {
        printf("input a number:");
        scanf("%d", &input);
        printf("\ninput is %d\n", input & 0xff);

        for (i = 0; i < sizeof(buffer); i++) {
            buffer[i] = input & 0xff;
        }

        frames = snd_pcm_writei(handle, buffer, sizeof(buffer));
        if (frames < 0)
            frames = snd_pcm_recover(handle, frames, 0);
        if (frames < 0) {
            printf("snd_pcm_writei failed: %s\n", snd_strerror(err));
            break;
        }
        if (frames > 0 && frames < (long)sizeof(buffer))
            printf("Short write (expected %li, wrote %li)\n", (long)sizeof(buffer), frames);
    }

    return EXIT_SUCCESS;
} /* ----------  end of function main  ---------- */
