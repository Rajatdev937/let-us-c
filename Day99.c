// Q149: Use malloc() to allocate structure memory dynamically and print details.

/*
Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88

*/
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student *s;

    // Allocate memory using malloc
    s = (struct Student *) malloc(sizeof(struct Student));

    // Input details
    scanf("%s %d %d", s->name, &s->roll, &s->marks);

    // Output
    printf("Name: %s | Roll: %d | Marks: %d", s->name, s->roll, s->marks);

    // Free memory
    free(s);

    return 0;
}
