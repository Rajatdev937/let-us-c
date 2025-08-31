// Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include<stdio.h>
#include<math.h>
int main ()
{
int a , b ,c ;
float D,root1,root2;
printf("enter the coefficents (a , b ,c):  ");
scanf("%d%d%d",&a,&b,&c);

if ( a==0 )
{
    printf("since a is 0  this is not a quadratic equation");
    return 0;
}

D=b*b-4*a*c;

if(D>0){
    root1=(-b + sqrt(D))/2*c;
    root2=(-b - sqrt(D))/2*c;
    printf("the roots are real and distinct %.2f and %.2f",root1,root2);
}
else if (D==0){
    root1=(-b + sqrt(D))/2*c;
    printf("the roots real and equal roots %.2f ",root1);
}
else {
    printf("imaginary/unreal roots");
}

return 0;
}
