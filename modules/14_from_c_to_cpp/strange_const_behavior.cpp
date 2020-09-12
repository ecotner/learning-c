#include <stdio.h>

void ModifyConst(int * x) {
    *x = *x + 1;
}

int main() {
    // I have done some experiments, and there seems to be some weird shit going
    // on with const variables... below I create a pointer `x` which points to the
    // address of `a`, but when I dereference `x` it does not have the same value as `a`
    const int a = 5;
    printf("before:\n");
    printf("&a=%p,  a=%d\n", &a, a);
    const int * x = &a;
    printf(" x=%p, *x=%d\n", x, *x);

    ModifyConst((int *) x);

    printf("after:\n");
    printf("&a=%p,  a=%d\n", &a, a);
    printf(" x=%p, *x=%d\n", x, *x);
}