#include <stdio.h>

int main() {
    float celsius, farenheit, kelvin;

    celsius = 21;
    farenheit = (celsius * 9 / 5) + 32;
    kelvin = celsius + 273.15f;
    printf("%.2f C = %.2f F = %.2f K\n",
        celsius,
        farenheit,
        kelvin
    );
}