#include <stdio.h>

int main() {
    int numbers[] = { 101, 202, 303 }; // an integer array
    // int numbers[3]; // uninitialized array of length 3
    // int numbers[3] = { 101 }; // partially initialized, other values are zero

    int size = sizeof(numbers) / sizeof(numbers[0]); // remember sizeof() returns size in bytes

    for (int i=0; i<size; i++) {
        printf("%d\n", numbers[i]);
    }
}