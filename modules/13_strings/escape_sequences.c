#include <stdio.h>

int main() {
    // char * message = "Hello world\nGoodbye"; // prints Goodbye on new line
    // char * message = "Hello world\rGoodbye"; // prints Goodbye on top of Hello world
    char * message = "\"Hello world\""; // escapes the quotation marks
    printf("%s\n", message);
}