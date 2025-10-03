// Q79: Perform diagonal traversal of a matrix.
/* 
Sample Test Cases:   
Input 1:   
3 3  
1 2 3 
4 5 6 
7 8 9 
Output 1: 
1 2 4 7 5 3 6 8 9 
*/ 
#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int matrix[m][n];

    // Input matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Diagonal traversal
    for (int d = 0; d < m + n - 1; d++) {
        int row = (d < n) ? 0 : d - n + 1; // starting row
        int col = (d < n) ? d : n - 1;     // starting col

        while (row < m && col >= 0) {
            printf("%d ", matrix[row][col]);
            row++;
            col--;
        }
    }
    return 0;
} 
