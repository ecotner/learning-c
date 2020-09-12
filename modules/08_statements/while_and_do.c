#include <stdio.h>

int main() {
    int count = 10;

    do {
        printf("count %d\n", count);
        count += 1;
    }
    while (count < 10);
}