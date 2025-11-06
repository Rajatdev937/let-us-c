// Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    // Open file in read mode
    fp = fopen("sample.txt", "r");

    if (fp == NULL) {
        printf("Error: Unable to open the file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        // Count lines
        if (ch == '\n') {
            lines++;
        }

        // Check if character is part of a word
        if (!isspace(ch) && inWord == 0) {
            inWord = 1;  // We entered a new word
            words++;
        }
        else if (isspace(ch)) {
            inWord = 0;  // We are no longer in a word
        }
    }

    // If file does not end with newline, count last line
    if (characters > 0 && ch != '\n')
        lines++;

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
