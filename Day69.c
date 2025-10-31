// Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int nums[n];
    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    
    // Formula for expected sum of unique numbers (0 to n-2)
    // Because one number is repeated, array has n numbers but only n-1 unique
    int expectedSum = (n - 1) * (n - 2) / 2;
    
    int actualSum = 0;
    for (int i = 0; i < n; i++)
        actualSum += nums[i];
    
    int repeated = actualSum - expectedSum;
    
    printf("Repeated element: %d", repeated);
    
    return 0;
}
