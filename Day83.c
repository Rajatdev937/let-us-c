// Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/
#include <stdio.h>
#include <string.h>

enum Months {
    JAN, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    char month[4];
    scanf("%s", month);

    // Convert input to uppercase (optional if input is always uppercase)
    for(int i = 0; month[i]; i++){
        if(month[i] >= 'a' && month[i] <= 'z')
            month[i] -= 32;
    }

    enum Months m;

    if(strcmp(month, "JAN") == 0) m = JAN;
    else if(strcmp(month, "FEB") == 0) m = FEB;
    else if(strcmp(month, "MAR") == 0) m = MAR;
    else if(strcmp(month, "APR") == 0) m = APR;
    else if(strcmp(month, "MAY") == 0) m = MAY;
    else if(strcmp(month, "JUN") == 0) m = JUN;
    else if(strcmp(month, "JUL") == 0) m = JUL;
    else if(strcmp(month, "AUG") == 0) m = AUG;
    else if(strcmp(month, "SEP") == 0) m = SEP;
    else if(strcmp(month, "OCT") == 0) m = OCT;
    else if(strcmp(month, "NOV") == 0) m = NOV;
    else if(strcmp(month, "DEC") == 0) m = DEC;
    else {
        printf("Invalid month");
        return 0;
    }

    switch(m) {
        case JAN: printf("31 days"); break;
        case FEB: printf("28 or 29 days"); break;
        case MAR: printf("31 days"); break;
        case APR: printf("30 days"); break;
        case MAY: printf("31 days"); break;
        case JUN: printf("30 days"); break;
        case JUL: printf("31 days"); break;
        case AUG: printf("31 days"); break;
        case SEP: printf("30 days"); break;
        case OCT: printf("31 days"); break;
        case NOV: printf("30 days"); break;
        case DEC: printf("31 days"); break;
    }

    return 0;
}
