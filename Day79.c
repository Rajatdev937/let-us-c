// Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

/*
Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/
#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("numbers.txt", "r"); // Open the file in read mode
    if (fptr == NULL) {
        printf("Error! File cannot be opened.\n");
        return 1;
    }

    int num, sum = 0, count = 0;

    // Read all integers until end of file
    while (fscanf(fptr, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fptr);

    if (count == 0) {
        printf("No numbers found in the file.\n");
    } else {
        float avg = (float)sum / count;
        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", avg);
    }

    return 0;
}
