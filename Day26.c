// Q52: Write a program to print the following pattern:

// *

// *
// *
// *

// *
// *
// *
// *
// *

// *
// *
// *

// *



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/

#include <stdio.h>

int main() {
    int i, j;
    int blocks[] = {1, 3, 5, 3, 1};  // Number of stars in each block
    int n = 5;  // Number of blocks

    for(i = 0; i < n; i++) {       // Loop through each block
        for(j = 0; j < blocks[i]; j++) {
            printf("*\n");         // Print each star on new line
        }
        printf("\n");               // Empty line after each block
    }

    return 0;
}
