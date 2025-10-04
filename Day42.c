// Q83: Count vowels and consonants in a string.

// /*
// Sample Test Cases:
// Input 1:
// hello
// Output 1:
// Vowels=2, Consonants=3

// */
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;
    
    // Input string
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]); // convert to lowercase
        if (c >= 'a' && c <= 'z') { // check if alphabet
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels=%d, Consonants=%d", vowels, consonants);
    return 0;
}
