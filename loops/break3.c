#include<stdio.h>
int main ()
{
int a=1;
do{
    if(a==5){
    break;
    }
    printf("%d\n",a);
    a++;
}while(a<=10);
return 0;
}