#include <stdio.h>

// like a struct, but variable ~share the same address~
// this seems EXTREMELY RISKY; do not advise you use
union OneThingOrAnother {
    int Integer;
    float RealNumber;
};

int main() {
    printf("int %d\n", (int) sizeof(int));
    printf("float %d\n", (int) sizeof(float));
    printf("union %d\n", (int) sizeof(union OneThingOrAnother));
}