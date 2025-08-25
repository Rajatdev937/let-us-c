// Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10
Input 2:
7 14
Output 2:
After swap: 14 7
*/

//  METHOD I (using addition and subtraction)
#include<stdio.h>
int main ()
{
int num1,num2 ;
//ask user to input two numbers
printf("enter two number: ");
scanf("%d%d",&num1,&num2);
 
printf("before swapping a=%d b=%d \n",num1,num2);

num1=num1-num2;// Step 1: Subtract b from a and store result in a
num2=num2+num1;// Step 2: Add new a (which is a-b) to b → this gives original a
num1=num2-num1; // Step 3: Subtract new a (a-b) from new b (original a) → gives original b
 
printf("after swapping a=%d b=%d \n" ,num1,num2);//display vlaues after swapping
return 0;
}

