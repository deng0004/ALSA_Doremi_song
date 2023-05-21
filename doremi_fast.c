#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <alsa/asoundlib.h>
#include <limits.h>

#define SAMPLE_RATE 44100
#define DURATION_SECONDS 0.5
#define AMPLITUDE 0.5

// Function to play a single note
void playNote(snd_pcm_t *pcm_handle, float frequency) {
    snd_pcm_sframes_t frames = SAMPLE_RATE * DURATION_SECONDS;
    short *buffer = (short *)malloc(frames * sizeof(short));
    float angular_frequency = 2 * M_PI * frequency / SAMPLE_RATE;
    int i;
    for (i = 0; i < frames; i++) {
        buffer[i] = AMPLITUDE * SHRT_MAX * sin(angular_frequency * i);
    }
    snd_pcm_writei(pcm_handle, buffer, frames);
    free(buffer);
}

int main() {
    snd_pcm_t *pcm_handle;
    if (snd_pcm_open(&pcm_handle, "default", SND_PCM_STREAM_PLAYBACK, 0) < 0) {
        printf("Error opening PCM device\n");
        return -1;
    }
    if (snd_pcm_set_params(pcm_handle, SND_PCM_FORMAT_S16_LE, SND_PCM_ACCESS_RW_INTERLEAVED, 1, SAMPLE_RATE, 1, 500000) < 0) {
        printf("Error setting PCM parameters\n");
        return -1;
    }

    // "Do-Re-Mi" notes frequency values
    float frequencies[] = {261.63, 293.66, 329.63, 261.63, 261.63, 293.66, 329.63, 261.63, 329.63, 349.23, 392.00, 392.00, 349.23, 329.63, 261.63, 230.63};
    int num_notes = sizeof(frequencies) / sizeof(float);

    int i;
    for (i = 0; i < num_notes; i++) {
        playNote(pcm_handle, frequencies[i]);
    }

    snd_pcm_close(pcm_handle);

    return 0;
}
