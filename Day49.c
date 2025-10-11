// Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char name[100];
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    // Print first initial (if alphabet)
    if (isalpha(name[0]))
        printf("%c.", toupper(name[0]));

    // Loop through and find next initials after spaces
    for (int i = 1; name[i] != '\0'; i++) {
        if (name[i - 1] == ' ' && isalpha(name[i])) {
            printf("%c.", toupper(name[i]));
        }
    }

    return 0;
}
