#include <stdio.h>

// memory assigned according to declaration order
// address size is one "word" (4 bytes), so padding is introduced
typedef struct Layout1 {
    short first; // xx__
    int second; // xxxx
    short third; // xx__
} Layout1 ;

// rearranging the declaration eliminates the padding
typedef struct Layout2 {
    short first; // xx
    short third; // xx
    int second; // xxxx
} Layout2 ;

int main() {
    // memory footprint of padded struct
    printf("short %d\n", (int) sizeof(short)); // 2
    printf("int %d\n", (int) sizeof(int)); // 4
    printf("struct %d\n\n", (int) sizeof(Layout1)); // 12

    // memory footprint of non-padded struct
    printf("short %d\n", (int) sizeof(short)); // 2
    printf("int %d\n", (int) sizeof(int)); // 4
    printf("struct %d\n\n", (int) sizeof(Layout2)); // 8
}