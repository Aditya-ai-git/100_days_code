//Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>
#include <stdlib.h>

// Define Employee structure
struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee emp, empRead;
    FILE *fp;

    // Input employee details
    printf("Enter Employee details (Name ID Salary):\n");
    scanf("%s %d %f", emp.name, &emp.id, &emp.salary);

    // Open file in write mode (binary)
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    // Write structure to file
    fwrite(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nEmployee details entered and stored in file.\n");

    // Open file in read mode (binary)
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    // Read structure from file
    fread(&empRead, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Display employee details read from file
    printf("\nEmployee Data Read from File:\n");
    printf("Name: %s | ID: %d | Salary: %.2f\n", empRead.name, empRead.id, empRead.salary);

    return 0;
}