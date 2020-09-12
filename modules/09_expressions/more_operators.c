#include <stdio.h>

int main() {
    int width = 100;
    int height = 200;

    int area = width * height;
    int perimeter = 2 * (width + height);

    printf("area=%d perimeter=%d\n", area, perimeter);

    // all of these do the same thing
    ++width;
    width = width + 1;
    width += 1;

    if (width == height) printf("square\n");
    if (width > height) printf("wider\n");
    if (width < height) printf("taller\n");
    if (width != height) printf("not square\n");
}