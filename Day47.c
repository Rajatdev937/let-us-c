// Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], word[20], longest[20];
    int i = 0, j = 0, maxLen = 0, len = 0;

    printf("Enter a sentence: ");
    gets(str); // (Note: gets() is unsafe; you can use fgets() in practice)

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            len = strlen(word);

            if (len > maxLen) {
                maxLen = len;
                strcpy(longest, word);
            }

            j = 0; // reset for next word
        }
        i++;
    }

    // check last word (in case sentence doesn't end with space)
    word[j] = '\0';
    len = strlen(word);
    if (len > maxLen)
        strcpy(longest, word);

    printf("%s", longest);

    return 0;
}
