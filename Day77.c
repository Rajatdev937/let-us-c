// Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/
#include <stdio.h>
#include <ctype.h>  // for toupper()

int main() {
    FILE *fptr_in, *fptr_out;
    char ch;

    // Open input file for reading
    fptr_in = fopen("input.txt", "r");
    if (fptr_in == NULL) {
        printf("Error: Cannot open input.txt\n");
        return 1;
    }

    // Open output file for writing
    fptr_out = fopen("output.txt", "w");
    if (fptr_out == NULL) {
        printf("Error: Cannot open output.txt\n");
        fclose(fptr_in);
        return 1;
    }

    // Read each character from input.txt and convert to uppercase
    while ((ch = fgetc(fptr_in)) != EOF) {
        ch = toupper(ch);  // convert lowercase to uppercase
        fputc(ch, fptr_out);
    }

    printf("File converted successfully. Check output.txt\n");

    fclose(fptr_in);
    fclose(fptr_out);

    return 0;
}
