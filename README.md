# A sound wave Generation of "Do-Re-Mi" melody (ALSA_Doremi_song).


The code you provided demonstrates a simple program that plays the "Do-Re-Mi" notes using the ALSA API. Let's break down the code and understand its components:

#include <stdio.h>: This is a preprocessor directive that includes the standard input/output library, allowing you to use functions like printf.

#include <stdlib.h>: This directive includes the standard library, which provides various general-purpose functions, including memory allocation and deallocation functions like malloc and free.

#include <math.h>: This directive includes the math library, which provides mathematical functions like sin.

#include <alsa/asoundlib.h>: This directive includes the ALSA library's header file, which provides the necessary functions and definitions for working with sound in Linux.

#define SAMPLE_RATE 44100: This line defines a constant named SAMPLE_RATE with a value of 44100, representing the audio sample rate in samples per second.

#define DURATION_SECONDS 0.5: This line defines a constant named DURATION_SECONDS with a value of 0.5, representing the duration of each note in seconds.

#define AMPLITUDE 0.5: This line defines a constant named AMPLITUDE with a value of 0.5, representing the amplitude or volume of the notes.

void playNote(snd_pcm_t *pcm_handle, float frequency): This is a function declaration for playNote, which takes a PCM handle (for audio output) and a frequency as parameters. It plays a single note with the specified frequency.

snd_pcm_t *pcm_handle;: This declares a variable pcm_handle of type snd_pcm_t*, which represents the PCM (Pulse Code Modulation) handle for audio output.

snd_pcm_open(&pcm_handle, "default", SND_PCM_STREAM_PLAYBACK, 0) < 0: This line opens the PCM device for playback by calling snd_pcm_open. It uses the PCM handle pcm_handle to refer to the opened device. If there is an error, it displays an error message and returns -1.

snd_pcm_set_params(pcm_handle, SND_PCM_FORMAT_S16_LE, SND_PCM_ACCESS_RW_INTERLEAVED, 1, SAMPLE_RATE, 1, 500000) < 0: This line sets the PCM parameters for the device using snd_pcm_set_params. It specifies the audio format, access type, channel count, sample rate, period size, and timeout. If there is an error, it displays an error message and returns -1.

float frequencies[] = {261.63, 293.66, 329.63, ...}: This line declares an array named frequencies that holds the frequency values for the "Do-Re-Mi" notes. Each element represents a note's frequency in Hertz.

void playNote(pcm_handle, frequencies[i]);: This line calls the playNote function for each note in the frequencies array. It passes the PCM handle (pcm_handle) and the frequency value (frequencies[i]) as arguments.

snd_pcm_close(pcm_handle);: This line closes the PCM device by calling snd_pcm_close, releasing any resources associated with it.

The program iterates over the frequencies array, playing each note using the playNote function. It utilizes the ALSA API to generate audio samples for each note and writes them to the PCM device for playback.


# Below are instructions for installing library, compile and excute of the code.<br><br>


command to install ALSA library in linux environment: `sudo apt-get install libasound2-dev` <br><br>

---

command to compile using GCC (GNU Compiler Collection): `gcc doremi_fast.c -o doremi_fast -lasound -lm`<br><br>

Explanation: 

`gcc`: The gcc command is the invocation of the GCC compiler.

`doremi_fast.c`: This is the source code file (doremi_fast.c) that you want to compile.

`-o doremi_fast`: The -o option specifies the output file name, and doremi_fast is the desired name for the resulting executable file.

`-lasound`: The -l option is used to specify a library that needs to be linked with the compiled code. In this case, it's -lasound, which tells the compiler to link against the ALSA library (libasound). ALSA is the Advanced Linux Sound Architecture, which provides an API for sound-related operations on Linux.

`-lm`: Similarly, the -lm option tells the compiler to link against the math library (libm). This library provides various mathematical functions that are used in the code (e.g., sin).

---
command for execute doremi_fast file in current directory: `./doremi_fast` <br><br>

Explanation: 
 
`./`: The ./ prefix is used to indicate that the program should be executed from the current directory. This is necessary to specify the path to the executable file.

`doremi_fast`: This is the name of the compiled program (executable file) that you want to run.
 

### [A demo of using ALSA library with C programming language](https://www.youtube.com/watch?v=jDrWWkoIYaA)

---
https://github.com/deng0004/ALSA_Doremi_song/assets/118713625/0b8c88f4-dcbc-4410-823a-db8b79f4edcd



