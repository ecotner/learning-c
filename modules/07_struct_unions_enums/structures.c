#include <stdio.h>

// define our own Pixel type
struct Pixel {
    float X;
    float Y;
};

typedef unsigned char byte;

// alternative, but acceptable way to define struct
// also the way it's declared in C++
typedef struct { // can also do "typedef struct Color"
    byte Red;
    byte Green;
    byte Blue;
} Color;

int main() {
    // standard variable declaration
    struct Pixel p = {10.f, 20.0f};
    // alternative variable declaration
    Color c = {255, 128}; // any omitted value is 0 by default

    float x = p.X; // access attribute
    c.Blue = 255; // modify attribute
}