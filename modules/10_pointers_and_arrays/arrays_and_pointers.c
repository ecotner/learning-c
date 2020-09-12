#include <stdio.h>

int main() {
    int numbers[] = { 101, 202, 303 }; // an integer array

    int size = sizeof(numbers) / sizeof(numbers[0]); // remember sizeof() returns size in bytes

    int * p = numbers; // arrays are secretly pointers pointing to the address of the 0th element in the array
    // since array elements are contiguous in memory, adding the size of the array (# of elements) to the
    // address produces an address that is one more than the end of the array
    int * end = p + size;

    for (; p < end; p++) {
        printf("%d\n", *p);
    }
}