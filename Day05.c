// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
// Input 1:
// 1000 5 2
// Output 1:
// Simple Interest=100, Compound Interest=102.5

// Input 2:
// 5000 7 3
// Output 2:
// Simple Interest=1050, Compound Interest=1125.76

//I.Simple Interest

#include <stdio.h>
int main() {
    int p, t;
    float r, SI;

    printf("Enter the principal amount: ");
    scanf("%d", &p);

    printf("Enter the rate: ");
    scanf("%f", &r);

    printf("Enter the time: ");
    scanf("%d", &t);

    SI = (p * r * t) / 100;//simple interest formula

    printf("Simple Interest = %.2f\n", SI);

    return 0;
}
//II.Compound Interest
#include <stdio.h>
#include <math.h>//for pow() function   
 
int main() {
    int p, t,n;
    float r, CI;
    printf("Enter the principal amount: ");
    scanf("%d", &p);

    printf("Enter the rate: ");
    scanf("%f", &r);

    printf("Enter the time: ");
    scanf("%d", &t);

    printf("enter the number of times that interest is compounded per year: ");
     
    printf("Compound Interest = %.2f\n",CI);
    return 0;
}
