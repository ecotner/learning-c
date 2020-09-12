#include <stdio.h>

void run() {
    int hens;
    int eggs = 4;

    hens += 1;
    eggs += 1;

    printf("hens=%d, eggs=%d\n", hens, eggs);
}

int main() {
    run();
    run();
    run();
}