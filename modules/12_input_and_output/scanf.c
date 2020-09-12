#include <stdio.h>

int main() {
    /* simple integers
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d %d %d/n", a, b, c);
    */

    // string message
    char message[100]; // buffer will overflow if too small for message!
    scanf("%s", message);
    printf("%s\n", message);
}