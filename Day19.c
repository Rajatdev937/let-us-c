// Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>

int main() {
    int a, b, lcm;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Start from the maximum of the two numbers
    lcm = (a > b) ? a : b;

    // Keep looping until we find a common multiple
    while (1) {
        if (lcm % a == 0 && lcm % b == 0) {
            printf("LCM of %d and %d = %d\n", a, b, lcm);
            break; // exit loop once LCM is found
        }
        lcm++; // check next number
    }

    return 0;
}

