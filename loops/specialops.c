#include<stdio.h>
int main ()
{
int x,y,z;
const x=10;
printf("enter x: ");
scanf("%d",&x);

y=x++ ;
z=--y+x++;
printf("value of  y is %d\n",y);
printf("vlaue of z is %d\n",z);

return 0;
}
