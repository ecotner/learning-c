#include <stdio.h>

// arrays must be passed to functions as pointers. but we lose any reference to the length of
// the array by passing just a single pointer, so we need to pass some more information. there
// are several ways to do this:
void Print1(int * begin, int * end) // pass beginning and end pointers
{
    // note that in C, funtions are ALWAYS pass-by-value, so this doesn't actually modify the
    // value of the pointer outside this function
    for (; begin < end; begin++){
        printf("%d\n", *begin);
    }
}

void Print2(int * begin, int size) // pass beginning pointer and length of array
{
    for (int i=0; i < size; i++){
        printf("%d\n", *(begin + i));
    }
}

// return pointer to the largest element in the array
int * find_max(int * begin, int * end) {
    if (begin == end) return 0; // return null pointer if empty array

    int * largest = begin;
    for (; begin < end; begin++){
        printf("%d\n", *begin);
        if (*begin > *largest) {
            largest = begin;
        }
    }
    return largest;
}


int main() {
    int numbers[] = { 1, 5, 4, 2, 3 }; // an integer array
    int size = sizeof(numbers) / sizeof(numbers[0]); // remember sizeof() returns size in bytes

    Print1(numbers, numbers + size);
    printf("\n");
    Print2(numbers, size);
    printf("\n");
    int * largest = find_max(numbers, numbers + size);
    printf("\nlargest element is %d\n", *largest);
}