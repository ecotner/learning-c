#include <stdio.h>

int main() {
    int eggs = -2;

    // don't forget the "break", otherwise any statement after the matching
    // case will be executed
    switch (eggs) {
    case 0: printf("no cake :(\n"); break;
    case 1: printf("cupcake :)\n"); break;
    default: printf("cake!\n"); break;
    }
}