#include <stdio.h>

int main() {
    float celsius = 10, farenheit, kelvin;

    while (celsius < 100) {
        celsius = celsius + 10;
        farenheit = (celsius * 9 / 5) + 32;
        kelvin = celsius + 273.15f;
        printf("%.2f C = %.2f F = %.2f K\n",
            celsius,
            farenheit,
            kelvin
        );
    }
}