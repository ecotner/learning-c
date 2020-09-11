#include <stdio.h>

float celsius_to_farenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

float celsius_to_kelvin(float celsius) {
    return celsius + 273.15f;
}

int main() {
    float celsius = 10;

    while (celsius < 100) {
        celsius = celsius + 10;
        float farenheit = celsius_to_farenheit(celsius);
        float kelvin = celsius_to_kelvin(celsius);
        printf("%.2f C = %.2f F = %.2f K\n",
            celsius,
            farenheit,
            kelvin
        );
    }
}