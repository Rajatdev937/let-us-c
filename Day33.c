// Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/

#include <stdio.h>

int main() {
    int n, i, pos, element;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n+1];  // +1 to accommodate the new element

    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to insert: ");
    scanf("%d", &element);

    // Find the position to insert
    for(pos = 0; pos < n; pos++) {
        if(arr[pos] > element)
            break;
    }

    // Shift elements to the right
    for(i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }

    arr[pos] = element; // Insert element
    n++; // Increase array size

    // Print the updated array
    printf("Updated array: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    
    return 0;
}
