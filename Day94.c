// Q144: Write a function that accepts a structure as parameter and prints its members.

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/
#include <stdio.h>

// structure definition
struct Student {
    char name[50];
    int roll;
    int marks;
};

// function that accepts structure as parameter
void display(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d", s.name, s.roll, s.marks);
}

int main() {
    struct Student st;

    // input
    scanf("%s %d %d", st.name, &st.roll, &st.marks);

    // function call
    display(st);

    return 0;
}
