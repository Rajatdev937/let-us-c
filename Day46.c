// Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int i, count = 0;

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);

    // Input character to count
    printf("Enter a character to count: ");
    scanf(" %c", &ch); // Note the space before %c

    // Count frequency
    for(i = 0; i < strlen(str); i++) {
        if(str[i] == ch) {
            count++;
        }
    }

    // Output result
    printf("%d\n", count);

    return 0;
}
