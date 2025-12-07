// Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    FILE *fp;
    struct Employee e1, e2;

    // input from user
    scanf("%s %d %f", e1.name, &e1.id, &e1.salary);

    // ------------ WRITE TO BINARY FILE ---------------
    fp = fopen("employee.bin", "wb");   // create binary file
    fwrite(&e1, sizeof(struct Employee), 1, fp);   // write structure
    fclose(fp);

    printf("Employee details stored successfully.\n");

    // ------------ READ FROM BINARY FILE ---------------
    fp = fopen("employee.bin", "rb");   // open binary file to read
    fread(&e2, sizeof(struct Employee), 1, fp);    // read structure
    fclose(fp);

    // display data read from file
    printf("Name: %s | ID: %d | Salary: %.2f", e2.name, e2.id, e2.salary);

    return 0;
}
