// Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/
#include<stdio.h>
int main ()
{
int num1,num2,temp;//num1=1st number  num2=2nd number temp=temproray variable
  
printf("enter the numbers to be swapped: ");//enter the numbers
scanf("%d%d",&num1,&num2);

printf("before swapping a=%d b=%d \n",num1,num2);

// Swapping using third variable
temp=num1;
num1=num2;
num1=temp;

printf("after spwaping a= %d b= %d\n",num1,num2);    //numbers are swapped
  
return 0;

}
