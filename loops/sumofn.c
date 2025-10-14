#include<stdio.h>
int main ()
{
int i=1;
int sum=0;
int n;

printf("enter the nth term: ");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
    sum=sum+i;
}
printf("%d",sum);
return 0;
}