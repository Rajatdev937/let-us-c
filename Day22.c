// Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/


#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    int fact = 1, i;
    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, temp, digit, sum = 0;

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Sum factorial of digits
    while (temp != 0) {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    // Check if strong number
    if (sum == num)
        printf("angstrong number\n");
    else
        printf("Not angstrong number\n");

    return 0;
}
