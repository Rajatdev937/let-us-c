// Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include <stdio.h>

struct student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    FILE *fptr;
    int n, i;
    struct student s;

    // ======== WRITE TO FILE ========
    fptr = fopen("students.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Name: ");
        scanf("%s", s.name);

        printf("Roll: ");
        scanf("%d", &s.roll);

        printf("Marks: ");
        scanf("%d", &s.marks);

        fprintf(fptr, "%s %d %d\n", s.name, s.roll, s.marks);
    }

    fclose(fptr);


    // ======== READ FROM FILE ========
    fptr = fopen("students.txt", "r");

    printf("\n--- Student Records ---\n");

    while (fscanf(fptr, "%s %d %d", s.name, &s.roll, &s.marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
    }

    fclose(fptr);

    return 0;
}
