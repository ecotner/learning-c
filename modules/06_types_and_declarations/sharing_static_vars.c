#include <stdio.h>

static int eggs; // different functions will share this variable

void up() {
    eggs += 10;
}

void down() {
    eggs -= 5;
}

int main() {
    up();
    up();
    down();

    printf("%d eggs\n", eggs);
}