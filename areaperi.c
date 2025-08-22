// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/


#include <stdio.h>

int main() 
{
    float l, w, area,perimeter; //l is length of the rectangle and  w is the width of rectangle

    printf("Enter the length of the rectangle: ");
    scanf("%f",&l);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &w);


    area = l*w;
    printf("\nArea of the rectangle = %.2f\n", area);

    perimeter=2*(l+w);
    printf("Perimeter of the rectangle = %.2f\n", perimeter);

    return 0;
}
