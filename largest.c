// Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/
#include<stdio.h>
int main ()
{
int num1,num2,num3, max;

//takes 3 numbers from the user
printf("enter  1st number: ");
scanf("%d",&num1);

printf("enter 2nd number: ");
scanf("%d",&num2);

printf("enter 3rd number: ");
scanf("%d",&num3);

//check which number is greater
if (num1 > num2 && num1 > num3)
 max=num1;
else if (num2 > num1 && num2 > num3)
max = num2;
else
max = num3;

printf(" largest number is %d\n",max);//prints the largest number

return 0;
} 