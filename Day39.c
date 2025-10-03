// Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int matrix[m][n];

    // Input matrix
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Extract and check diagonal
    int distinct = 1; // assume True
    for(int i = 0; i < m && i < n; i++) {
        for(int j = i + 1; j < m && j < n; j++) {
            if(matrix[i][i] == matrix[j][j]) {
                distinct = 0; // found duplicate
                break;
            }
        }
        if(!distinct) break;
    }

    if(distinct)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
