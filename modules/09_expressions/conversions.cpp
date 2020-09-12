#include <stdio.h>

int main() {
    // C++ can automatically infer the type of the expression (double)
    auto fiveNinths = 5.0 / 9;
    auto nineFifths = 9 / 5.0;
    printf("%f %f\n", fiveNinths, nineFifths);
}