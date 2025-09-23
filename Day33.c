#include <stdio.h>

int main() {
    int n, i, pos, ele;

    printf("Enter number of elements in sorted array: ");
    scanf("%d", &n);

    int arr[100];  // assuming max 100 elements
    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to insert: ");
    scanf("%d", &ele);

    // Find the correct position to insert
    for(pos = 0; pos < n; pos++) {
        if(arr[pos] > ele)
            break;
    }

    // Shift elements to the right
    for(i = n; i > pos; i--)
        arr[i] = arr[i-1];

    // Insert the element
    arr[pos] = ele;
    n++;  // increase size

    // Print updated array
    printf("Updated array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
