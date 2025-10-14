#include<stdio.h>
int main ()
{
int i=1;
int fact=1;
int n;
printf("enter a number: ");
scanf("%d",&n);

for (i=1;i<=n;i++)
{
   fact=fact*i;
}
printf("the factorial of %d is :  %d",n,fact);
return 0;
}