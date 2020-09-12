#include <stdio.h>

int Dozens(int eggs) { return eggs / 12; }

int main() {
    int eggs = Dozens(48) * 12;

    Dozens(12); // this is a statement by itself

    ++eggs; // increments by 1
    eggs++;
    printf("eggs %d\n", eggs);
    
    --eggs; // decrements by 1
    eggs--;
    printf("eggs %d\n", eggs);
}