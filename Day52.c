#include <stdio.h>
int main() {
    
    int n, x;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    int low = 0, high = n - 1;
    int result = -1;  // will store index of ceil

    // Binary Search for Ceil
    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] >= x) {
            result = mid;     // possible ceil found
            high = mid - 1;   // check if smaller index also satisfies
        } else {
            low = mid + 1;    // need bigger numbers
        }
    }

    printf("%d\n", result);
    return 0;
}
