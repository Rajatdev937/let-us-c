// Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/

#include <stdio.h>

int main() {
    int n, k;
    
    // Input array size
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input array elements
    printf("Enter the elements of array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input subarray size
    printf("Enter the size of subarray (k): ");
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
    
    // Slide the window
    for(int i = k; i < n; i++) {
        window_sum = window_sum - arr[i - k] + arr[i];  // subtract first element of previous window, add next element
        if(window_sum > max_sum) {
            max_sum = window_sum;
        }
    }
    
    printf("Maximum sum of subarray of size %d is %d\n", k, max_sum);
    
    return 0;
}


