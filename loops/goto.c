#include<stdio.h>
int main ()
{
int i=1;
label : 
 printf("the value is i is %d\n ",i);
 i++;
    goto label ;
return 0;
}