#include <stdio.h>
#include <string.h>

int main() {
    char * message = "Hello world";
    printf("size %d\n", (int) strlen(message));

    printf("Apples %d\n", strcmp(message, "Apples")); // message sorts higher than "Apples", so returns positive value
    printf("Oranges %d\n", strcmp(message, "Oranges")); // message sorts lower than "Oranges", so returns negative value
    printf("Hello world %d\n", strcmp(message, "Hello world")); // message == "Hello world", so returns zero
}