#include <stdio.h>

void MinMax(
    int * begin,
    int * end,
    int ** smallest,
    int ** largest) {
    // this function requires passing pointers to pointers because if we were to only pass in
    // regular pointers to smallest/largest, any changes to these pointers do not propagate
    // outside the function because of pass-by-value. by passing a double pointer, we can modify
    // the pointer the double pointer points to, which persists outside the scope of the function
    
    int * min = begin;
    int * max = begin;

    while (begin != end) {
        if (*begin < *min) {
            min = begin;
        }
        if (*begin > *max) {
            max = begin;
        }
        begin++;
    }
    // note that this actually modifies the address of the pointer OUTSIDE the function
    *smallest = min;
    *largest = max;
}

int main() {
    int value = 123; // variable
    int * p = &value; // pointer to variable
    int ** pp = &p; // pointer to pointer

    int values [] = {5, 2, 4, 3, 6};
    int size = sizeof(values) / sizeof(values[0]);
    int * smallest = 0;
    int * largest = 0;
    MinMax(values, values + size, &smallest, &largest);
    printf("min=%d, max=%d\n", *smallest, *largest);
}