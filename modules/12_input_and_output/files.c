#include <stdio.h>

int main() {
    // FILE * f = stdout; // writes to stdout
    FILE * f = 0;
    f = fopen("./test.txt", "w");
    fprintf(f, "Hello world\n");
    fclose(f);
}