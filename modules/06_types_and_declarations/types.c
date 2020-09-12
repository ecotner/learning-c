#include <stdio.h>

typedef unsigned char byte; // custom byte type

int main() {
    // some primitive types
    int i = 123;
    float f = 1.23f;
    double d = 2.34;
    char c = 'c';
    
    // modify the memory size of int
    unsigned int ui = 123u; // typically 32-bit
    short int si = 123; // 16-bit
    long int li = 123; // 64-bit

    // custom "byte" type defined above
    byte b = 0x12;

    printf("%d (%d bytes)\n", i, (int) sizeof(int));
}