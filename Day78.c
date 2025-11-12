// Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

/*
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/

#include <stdio.h>
#include <ctype.h>  // for tolower()

int main() {
    FILE *fptr;
    char ch;
    int vowels = 0, consonants = 0;

    // Open file for reading
    fptr = fopen("text.txt", "r");
    if (fptr == NULL) {
        printf("Error: Cannot open text.txt\n");
        return 1;
    }

    // Read each character and count vowels/consonants
    while ((ch = fgetc(fptr)) != EOF) {
        ch = tolower(ch);  // convert to lowercase for easy comparison
        if (ch >= 'a' && ch <= 'z') {  // only alphabetic characters
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(fptr);

    // Display result
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
