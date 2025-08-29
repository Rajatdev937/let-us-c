// Q18: Write a program to assign grades based on a percentage input.

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/
#include<stdio.h>
int main ()
{
float num ;
printf("enter the percentage: ");
scanf("%f",&num);

if(num >= 90 && num <= 100 )
{
    printf("Grade A");
}
else if ( num > 80 && num <= 89)
{
    printf("Grade B");
}
else if ( num > 70 && num <= 79 )
{
    printf("Grade C");
}
else if ( num > 60  && num<= 69  )
{
    printf("Grade D");
}
else if ( num> 50 && num<= 59)
{
    printf("Grade E");
}
else {
 printf("Grade F");
}
return 0;
}