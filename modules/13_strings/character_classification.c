#include <stdio.h>
#include <ctype.h> // useful for determining character types

int main() {
    char * message = "\"Hello world\"\nC:\\Foo\\Bar\nhttp://ecotner.com";
    printf("%s\n", message);

    for (char * p = message; *p; ++p) {
        char c = *p;
        printf("%c\t", c);

        if (isalnum(c)) printf("isalnum "); // alphanumeric [0-9a-zA-Z]
        if (isalpha(c)) printf("isalpha "); // alphabetical [a-zA-Z]
        if (islower(c)) printf("islower "); // lower-case [a-z]
        if (isupper(c)) printf("isupper "); // upper-case [A-Z]
        if (isdigit(c)) printf("isdigit "); // digit [0-9]
        if (isxdigit(c)) printf("isxdigit "); // hexidecimal digit [0-9a-fA-F]
        if (iscntrl(c)) printf("iscntrl "); // control character [\n\t\r]
        if (isgraph(c)) printf("isgraph "); // graphical character (??)
        if (isspace(c)) printf("isspace "); // whitespace [ \n\t]
        if (isblank(c)) printf("isblank "); // horizontal whitespace [ \t]
        if (isprint(c)) printf("isprint "); // printing character (??)
        if (ispunct(c)) printf("ispunct "); // punctuation [,.;?!@#$%^&*()] (others?)

        printf("\n");
    }
}