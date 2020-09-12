#include <stdio.h>

int main() {
    int i = 1234;

    printf("%p\n", &i); // "&i" is the memory address of the variable "i"

    int * p = &i; // p is a "pointer" to the address of i
    // int * p = 0; // 0 is a special address that represents an invalid pointer

    int j = *p; // this "dereferences" the pointer, so that j has the value of the
        // variable being pointed to by i

    *p = 2345; // this alters the value of i

    printf("i=%d, j=%d\n", i, j);
}