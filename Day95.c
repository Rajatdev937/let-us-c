// Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/
#include <stdio.h>
#include <string.h>

// structure definition
struct Student {
    char name[50];
    int roll;
    int marks;
};

// function to return structure of top student
struct Student getTopStudent(struct Student s[], int n) {
    int i, topIndex = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }
    return s[topIndex];     // return structure
}

int main() {
    int n, i;
    struct Student arr[100], top;

    scanf("%d", &n);   // number of students

    for (i = 0; i < n; i++) {
        scanf("%s %d %d", arr[i].name, &arr[i].roll, &arr[i].marks);
    }

    top = getTopStudent(arr, n);   // function call

    printf("Top Student: %s | Roll: %d | Marks: %d",
           top.name, top.roll, top.marks);

    return 0;
}

