#include <stdio.h>

int main() {
    char * font = "Myriad Pro";
    int size = 32;
    char * message = "Hello world";

    char buffer[50]; // this buffer is too small for the message being written to it

    // this will print the message, but crash the program afterwards because it writes
    // beyond the bounds of the memory
    sprintf(
        buffer,
        "<html><body><p style='font-family:%s;font-size:%dpx'>%s</p></body></html>",
        font,
        size,
        message
    );

    // this will immediately crash the program before printing because snprintf detects
    // that the buffer is too small to hold the message
    snprintf(
        sizeof(buffer),
        buffer,
        "<html><body><p style='font-family:%s;font-size:%dpx'>%s</p></body></html>",
        font,
        size,
        message
    );

    printf("%s\n", buffer);

}