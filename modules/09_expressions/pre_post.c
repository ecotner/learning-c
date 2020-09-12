#include <stdio.h>

int main() {
    int eggs = 12;

    int before = eggs++; // post-increment operator X++ returns value before increment
    printf("before %d\n", before);

    int after = ++eggs; // pre-increment operator ++X return value after increment
    printf("after %d\n", after);
}