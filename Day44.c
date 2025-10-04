// Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];

    // Input string (with spaces)
    fgets(str, sizeof(str), stdin);

    // Replace spaces with hyphens
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            str[i] = '-';
    }

    // Remove newline character from fgets if present
    str[strcspn(str, "\n")] = '\0';

    printf("%s", str);

    return 0;
}
