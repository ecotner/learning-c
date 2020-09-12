#include <stdio.h>

void add_matrices(int A[2][2], int B[2][2], int C[2][2], int sizeX, int sizeY) {
    // addes matrices elementwise
    for (int x=0; x<sizeX; x++) {
        for (int y=0; y<sizeY; y++) {
            // changes to C persist outside the function because it's actually a pointer
            C[x][y] = A[x][y] + B[x][y];
        }
    }
}

int main() {
    int A[2][2] = {{1,2}, {3,4}};
    int B[2][2] = {{0,1},{1,0}};
    int C[2][2];

    add_matrices(A, B, C, 2, 2);

    printf("| %d %d |\n", C[0][0], C[0][1]);
    printf("| %d %d |\n", C[1][0], C[1][1]);

}