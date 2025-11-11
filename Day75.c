// Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char text[200];

    // Taking file name as input
    printf("Enter filename: ");
    scanf("%s", filename);

    // Opening file in append mode
    fp = fopen(filename, "a");

    if (fp == NULL) {
        printf("Error: File does not exist or could not be opened.\n");
        return 1;
    }

    // Clearing input buffer (to take multi-word input)
    getchar();

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Appending the text to file
    fputs(text, fp);

    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}
