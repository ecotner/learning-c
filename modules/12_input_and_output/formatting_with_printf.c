#include <stdio.h>

int main() {
    // prints correctly
    printf("%d\n", 123);
    // prints incorrectly because the number is too large for a 32-bit integer (which is what %d expects)
    printf("%d\n", 111222333444);
    // prints correctly because %ld is for long integers
    printf("%ld\n", 111222333444);
    // prints in hexidecimal
    printf("%x\n", 1234);
    printf("%X\n", 1234); // uppercase version
    // floating point values
    printf("%f\n", 123.456);
    printf("%.2f\n", 123.456); // round to 2 decimals
    printf("%10.2f\n", 123.456); // output left-padded to >= 10 characters
    printf("pre%-10.2fpost\n", 123.456); // output right-padded to >= 10 characters
    // strings
    char * message = "Hello world; goodbye cruel world";
    printf("%s\n", message);
    // print substring
    int size = 11; // provide length of substring as argument
    printf("%.*s\n", size, message);
}