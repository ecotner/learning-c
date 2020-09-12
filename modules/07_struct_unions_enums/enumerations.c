#include <stdio.h>

typedef union OneThingOrAnother {
    int Integer;
    char Character;
} OneThingOrAnother;

// values are 0, 1, 2... by default
typedef enum WhichThing {
    TheInteger,
    TheCharacter
} WhichThing;

int main() {
    OneThingOrAnother var;

    var.Integer = 123;
    WhichThing type = TheInteger;
    printf("var %d type=%d\n",
        var.Integer,
        type
    );

    var.Character = 'V';
    type = TheCharacter;
    printf("var %c type=%d\n",
        var.Character,
        type
    );
}