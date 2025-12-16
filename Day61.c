// Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
/*
Sample Test Cases:
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:
arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr[] = [12, 1, 3, 5], k = 3
Output 3:
0 0

*/
#include <stdio.h>

int main() {
    int n, k;
    
    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input array elements
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input window size
    printf("Enter window size k: ");
    scanf("%d", &k);
    
    int i = 0, j = 0;
    int firstNeg[n]; // store first negative of current window
    int front = 0, rear = 0;
    int queue[n]; // to store indices of negative numbers
    
    while(j < n) {
        // If current element is negative, add its index to queue
        if(arr[j] < 0) {
            queue[rear++] = j;
        }
        
        // Check if window size reached
        if(j - i + 1 == k) {
            // If queue has negatives and the first negative is in window
            if(front < rear && queue[front] >= i) {
                printf("%d ", arr[queue[front]]);
            } else {
                printf("0 ");
            }
            
            // Slide the window
            if(front < rear && queue[front] == i) {
                front++; // remove element leaving the window
            }
            i++;
        }
        
        j++;
    }
    
    return 0;
}
