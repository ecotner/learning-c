#include <stdio.h>

int string_length(char * string) {
    // can calculate length by iterating through array elements until we hit null
    // terminator (end of string)
    int length = 0;
    for (char * p = string; *p != 0; p++) {
        length++;
    }
    return length;
}

int slick_str_len(char * string) {
    int length = 0;
    while (*string++) { // any nonzero value is considered true, so this is false only for null terminator 
        length++;
    }
    return length;
}

int main() {
    char * string1 = "Hello world"; // string literal with storage baked into compiler
    char string2[] = "Hello world"; // does the same thing since arrays are basically pointers

    printf("size=%d\n", (int) sizeof(string2)); // includes the memory of null terminator
    printf("length=%d\n", string_length(string2));
    printf("length=%d\n", slick_str_len(string2));

    printf("\n");
    printf("%d\n", slick_str_len("Hello world!"));
    printf("%d\n", slick_str_len(""));
    printf("%d\n", slick_str_len("Hi!"));
}