// Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main() {
    long long num;
    printf("Enter a number: ");
    scanf("%lld", &num);

    int count[10] = {0}; // To count digits 0-9

    // Handle negative numbers
    if(num < 0) num = -num;

    // Count digits
    while(num > 0) {
        int digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // Find the digit with maximum frequency
    int maxCount = 0, digitWithMax = 0;
    for(int i = 0; i < 10; i++) {
        if(count[i] > maxCount) {
            maxCount = count[i];
            digitWithMax = i;
        }
    }

    printf("%d\n", digitWithMax);

    return 0;
}
