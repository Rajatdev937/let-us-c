// Q56: Read and print elements of a one-dimensional array.

/*
Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30

Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5

*/
#include <stdio.h>

int main() {
int n, i;
printf("enter the size of array: ");
scanf("%d", &n);// read size of array

int arr[100];//define array with size of 100
printf("Now enter the elements of array: ");

// input elements
for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    }    
    
// output elements
for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
    }

return 0;
}
