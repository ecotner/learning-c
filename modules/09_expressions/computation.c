#include <stdio.h>

int main() {
    int eggs = 48; // 48 is an "expression"
    int dozens = eggs / 12; // "eggs / 12" is also an expression

    if (dozens) {
        printf("dozens %d\n", dozens);
    }
}