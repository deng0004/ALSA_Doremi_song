# A sound wave Generation of "Do-Re-Mi" melody (ALSA_Doremi_song).

### In this example, the author generated a sine wave with a frequency of 440Hz with a duration of 5 seconds. The audio data is stored in a buffer and then it is written to the PCM device using `snd_pcm_writei`. 

### Note that the code assumes a signed 16-bit little-endian format `(SND_PCM_FORMAT_S16_LE)`. You can modify the format and parameters based on your specific requirements. Additionally, make sure to adjust the PCM device name ("default" in this example) according to your system's configuration.

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



