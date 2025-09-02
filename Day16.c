// Q23: Write a program to calculate a library fine based on late dates

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹32

Input 3:
15
Output 3:
Fine ₹90

Input 4:
31
Output 4:
Membership Cancelled

*/
#include<stdio.h>
int main ()
{
int days,fine;
printf("enter the number of  late days:  ");
scanf("%d",&days);

if (days <=5)
{
    fine=days*2;
    printf("your fine for %d days is %d",days,fine);
}
else if (days <=15)
{
    fine=days*4;
    prinft("your fine for %d days is %d",days,fine);
}
else if (days <=30)
{
      fine=days*8;
      prinft("your fine for %d days is %d",days ,fine);
}
else{
    printf("membership cancelled");
}
return 0;
}