// Q4: Write a program to calculate the area and circumference of a circle given its radius.

// /*
// Sample Test Cases:
// Input 1:
// 7
// Output 1:
// Area=153.94, Circumference=43.96

// Input 2:
// 3
// Output 2:
// Area=28.27, Circumference=18.85

// */
// #include<stdio.h>
int main ()
{
int r;//r is the radius of the circle
float area,peri;

printf("enter the radius of circle: ");
scanf("%d", &r );

area=3.14*r*r;//prints the area
peri=2*3.14*r;//prints the peri

printf("area of circle is=%f\n",area);
printf("peri of circle is=%f\n",peri);

return 0;
}