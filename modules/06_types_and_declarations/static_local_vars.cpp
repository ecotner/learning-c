#include <stdio.h>

void run() {
    /* illustrate the effect of uninitialized variables
    // static int hens; // static variable with no initialization
    // int hens; // non-static variable with no initialization (NEVER DO THIS)
    static int hens = 4; // static variable with initialization (only initialized once)
    int eggs = 4;
    */

    /* will throw an error (in C, not C++) unless eggs is init to a constant */
    /* C++ will initialize eggs as 4 on the first run, then ignore after */
    int hens = 4;
    static int eggs = hens;  

    hens += 1;
    eggs += 1;

    printf("hens=%d, eggs=%d\n", hens, eggs);
}

void trample() {
    int a = 123;
    int b = 123;
}

int main() {
    /* illustrate the effect of uninitialized variables
    trample(); run();
    trample(); run();
    trample(); run();
    */

    run();
    run();
    run();
}