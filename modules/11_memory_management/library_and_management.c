#include <stdio.h>
#include <stdlib.h>

int main() {
    void * p1 = malloc(4); // allocates 4 bytes of memory, unknown type
    int * p2 = (int *) malloc(4); // allocates 4 bytes of memory for an integer

    if (!p2) {
        return 1; // exit with error if malloc() returns null pointer
    }

    // assign a value to the
    *p2 = 42;

    // release the memory
    free(p1);
    free(p2);
    // standard practice is to assign null pointer after freeing memory
    // so we don't accidentally use it again
    p1 = p2 = 0;

    // ex: allocate an ethernet frame (what is that?)
    void * frame = malloc(1514);

    free(frame);
    frame = 0;

    // ex: allocate a websocket message
    char * message = (char *) malloc(141);

    free(message);
    message = 0;
}