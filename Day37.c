// Q73: Find the sum of each row of a matrix and store it in an array.

// /*
// Sample Test Cases:
// Input 1:
// 2 3
// 1 2 3
// 4 5 6
// Output 1:
// 6 15

// */
#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    int rowSum[rows];

    // Input matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate row sums
    for (int i = 0; i < rows; i++) {
        int sum = 0; // Reset sum for each row
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
        rowSum[i] = sum;
    }

    // Print row sums
    for (int i = 0; i < rows; i++) {
        printf("%d ", rowSum[i]);
    }

    return 0;
}
