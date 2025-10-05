// Q92: Find the first repeating lowercase alphabet in a string.
/*
Sample Test Cases:
Input 1:
stress
Output 1:
s
*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[26] = {0}; // For lowercase a-z
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; i < strlen(str); i++) {
        if(str[i] >= 'a' && str[i] <= 'z') { // consider only lowercase
            freq[str[i] - 'a']++;
            if(freq[str[i] - 'a'] == 2) { // first time it becomes repeating
                printf("%c\n", str[i]);
                return 0;
            }
        }
    }

    printf("No repeating lowercase alphabet found\n");
    return 0;
}
