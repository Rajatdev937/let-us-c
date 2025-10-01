// Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;
    
    // Input first matrix
    scanf("%d %d", &rows1, &cols1);
    int A[rows1][cols1];
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix
    scanf("%d %d", &rows2, &cols2);
    int B[rows2][cols2];
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Check if addition is possible
    if (rows1 != rows2 || cols1 != cols2) {
        printf("Matrix addition not possible\n");
        return 0;
    }

    // Add matrices and print
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("%d ", A[i][j] + B[i][j]);
        }
        printf("\n");
    }

    return 0;
}
