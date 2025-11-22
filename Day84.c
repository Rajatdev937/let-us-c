// Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/


#include <stdio.h>
#include <string.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    char input[10];
    scanf("%s", input);

    enum Status s;

    if(strcmp(input, "SUCCESS") == 0) s = SUCCESS;
    else if(strcmp(input, "FAILURE") == 0) s = FAILURE;
    else if(strcmp(input, "TIMEOUT") == 0) s = TIMEOUT;
    else {
        printf("Invalid input");
        return 0;
    }

    switch(s) {
        case SUCCESS:
            printf("Operation successful");
            break;
        case FAILURE:
            printf("Operation failed");
            break;
        case TIMEOUT:
            printf("Operation timed out");
            break;
    }

    return 0;
}
