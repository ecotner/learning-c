This section was kind of confusing, so I will highlight what I have learned.

The "compilation" of a C program actually goes through several distinct steps:

1. The "preprocessor" prepares your code for compilation. This includes cutting out all comments, executing any directives (like `#define`, `#if`/`#endif`, `#include`), and combining any function definitions from header files (`\*.h`). Sometimes this is saved as an intermediate `*.i` file.
    * This can be done using the command `gcc -E file.c`
2. The compiler takes the output of the preprocessor and actually compiles it. This produces (potentially several) object files (`*.o` extension). These object files can be generated from source via `gcc -c file1.c file2.c`
3. The linker takes all the compiled object files and "links" them together into a single binary. This can be done with `gcc file1.o file2.o`

It should be noted that this can all be accomplished in a single step without generating any intermediate files by just doing `gcc file1.c file2.c` without any of the flags.
However, if you are writing a very large application or library, it can be more efficient to separately compile each source code file to an individual object file, then link them later.
This is because if you need to make a modification to some source, you only need to recompile that one file instead of all of them.