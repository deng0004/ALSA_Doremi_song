# ALSA_Doremi_song


command to install ALSA library in linux environment: `sudo apt-get install libasound2-dev`



command to compile using GCC (GNU Compiler Collection): `gcc doremi_fast.c -o doremi_fast -lasound -lm`

Explanation: 

gcc: The gcc command is the invocation of the GCC compiler.

doremi_fast.c: This is the source code file (doremi_fast.c) that you want to compile.

-o doremi_fast: The -o option specifies the output file name, and doremi_fast is the desired name for the resulting executable file.

-lasound: The -l option is used to specify a library that needs to be linked with the compiled code. In this case, it's -lasound, which tells the compiler to link against the ALSA library (libasound). ALSA is the Advanced Linux Sound Architecture, which provides an API for sound-related operations on Linux.

-lm: Similarly, the -lm option tells the compiler to link against the math library (libm). This library provides various mathematical functions that are used in the code (e.g., sin).


command for execute doremi_fast file in current directory: `./doremi_fast`
 
./: The ./ prefix is used to indicate that the program should be executed from the current directory. This is necessary to specify the path to the executable file.

doremi_fast: This is the name of the compiled program (executable file) that you want to run.
 




https://github.com/deng0004/ALSA_Doremi_song/assets/118713625/0b8c88f4-dcbc-4410-823a-db8b79f4edcd



