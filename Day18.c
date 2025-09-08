// Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include<stdio.h>
int main ()
{
int num,flag,i ; 
printf("enter a number: ");
scanf("%d",&num);

if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            flag = 1; // number is divisible
            break;
        }
    }

    if (flag == 0)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}