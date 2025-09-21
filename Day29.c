// Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/
#include <stdio.h>
int main() {
int n, i;
int arr[100];
int sum = 0; 

printf("enter the size of array: ");
scanf("%d", &n);   // size of array

printf("Now enter the elements of array: ");

for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);   // read elements
        sum = sum + arr[i];     // keep adding
}

printf("%d", sum);

return 0;
}
