// Q8: Write a program to find and display the sum of the first n natural numbers.

// Sample Test Cases:
// Input 1:
// 5
// Output 1:
// Sum=15

// Input 2:
// 10
// Output 2:
// Sum=55
#include<stdio.h>
int main ()
{

int n,sum;//n is the  number 
printf("Enter the value of n (last number): ");
scanf("%d",&n);

// Formula for sum of first n natural numbers
    sum = (n *(n + 1)) / 2;
    
printf("the sum of %d terms is = %d\n",n,sum);
return 0;
}