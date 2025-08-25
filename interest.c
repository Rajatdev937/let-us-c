#include <stdio.h>

int main() {
    int p, t;
    float r, I;

    printf("Enter the principal amount: ");
    scanf("%d", &p);

    printf("Enter the rate: ");
    scanf("%f", &r);

    printf("Enter the time: ");
    scanf("%d", &t);

    I = (p * r * t) / 100;

    printf("Simple Interest = %.2f\n", I);

    return 0;
}
