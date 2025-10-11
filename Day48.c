// Q96: Reverse each word in a sentence without changing the word order.
/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

int main() {
    char str[100];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (str[len - 1] == '\n')  // remove newline
        str[len - 1] = '\0';

    char *word_start = str;
    char *temp = str;

    while (*temp) {
        if (*temp == ' ') {
            reverseWord(word_start, temp - 1);
            word_start = temp + 1;
        }
        temp++;
    }

    reverseWord(word_start, temp - 1); // reverse last word

    printf("%s\n", str);
    return 0;
}
