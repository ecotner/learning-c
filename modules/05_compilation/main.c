#include "multiply.h"
#include <stdio.h>

// using macros like below is really sketchy...
#define LEVEL 2

int main() {
    multiply(4, 5); /* and then */ multiply(5, 6);

    // only include this block of code if macro LEVEL is > 0
    #if LEVEL > 0
    SQUARE(5); // using macro defined in "multiply.h"
    #endif

    // only include this block of code if macro RUNFAST is undefined
    #if !defined(RUNFAST)
    SQUARE(9);
    #endif

    printf("4 * 5 = %d\n", multiply(4, 5));
}