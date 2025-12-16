// Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum Role r;

    // Assign role (you can change this to test)
    r = ADMIN;   // Try USER or GUEST

    switch(r) {
        case ADMIN:
            printf("Welcome ADMIN! You have full access.\n");
            break;

        case USER:
            printf("Welcome USER! You have limited access.\n");
            break;

        case GUEST:
            printf("Welcome GUEST! Please register to get more access.\n");
            break;

        default:
            printf("Invalid role.\n");
    }

    return 0;
}
