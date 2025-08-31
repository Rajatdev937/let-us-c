// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include<stdio.h>
int main ()
{
int s1 ,s2, s3;
printf("enter three sides of triangle; ");
scanf("%d%d%d",&s1,&s2,&s3);

if(s1==s2 && s2==s3 && s3==s1)
{
    printf("its an equlilateral triangle");
}
else if (s1==s2 || s2==s3 || s1==s3)  
  {
      printf("It's an  isoceles triangle");
    }
 else  
{  
     printf("It's a scalene triangle");
 }
    return 0;
}// any two equal