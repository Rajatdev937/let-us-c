// Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2

*/
#include <stdio.h>

int main() {
    int n, k;

    // Input array size
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input subarray size k
    printf("Enter the subarray size k: ");
    scanf("%d", &k);

    if(k > n) {
        printf("Subarray size k cannot be greater than array size.\n");
        return 0;
    }

    // Calculate sum of first window of size k
    int max_sum = 0;
    for(int i = 0; i < k; i++) {
        max_sum += arr[i];
    }

    int window_sum = max_sum;

    // Slide the window through the array
    for(int i = k; i < n; i++) {
        window_sum = window_sum - arr[i - k] + arr[i];  // subtract outgoing element, add incoming
        if(window_sum > max_sum) {
            max_sum = window_sum;
        }
    }

    printf("Maximum sum of subarray of size %d is %d\n", k, max_sum);

    return 0;
}
