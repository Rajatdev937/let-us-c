#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int left[n], right[n], answer[n];

    // left[i] = product of all elements to the left of nums[i]
    left[0] = 1;
    for (int i = 1; i < n; i++)
        left[i] = left[i - 1] * nums[i - 1];

    // right[i] = product of all elements to the right of nums[i]
    right[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--)
        right[i] = right[i + 1] * nums[i + 1];

    // answer[i] = left[i] * right[i]
    for (int i = 0; i < n; i++)
        answer[i] = left[i] * right[i];

    printf("Resultant array: [");
    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i != n - 1)
            printf(",");
    }
    printf("]\n");

    return 0;
}
