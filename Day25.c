// Q50: Write a program to print the following pattern:
// *****
//  ****
//   ***
//    **
//     *

/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

*/

#include <stdio.h>

int main() {
    int i, j;
    
    for(i = 5; i >= 1; i--) { // Loop for rows
        // Print spaces
        for(j = 1; j <= 5 - i; j++) {
            printf(" ");
        }
        // Print stars
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");  // Move to next line
    }

    return 0;
}
