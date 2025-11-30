//Q144: Write a function that accepts a structure as parameter and prints its members.

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/
#include <stdio.h>

// Define the structure
struct Student {
    char name[50];
    int roll;
    int marks;
};

// Function that accepts structure as parameter and prints its members
void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
}

int main() {
    struct Student s1;

    // Taking input from user
    printf("Enter student details (Name Roll Marks):\n");
    scanf("%s %d %d", s1.name, &s1.roll, &s1.marks);

    // Function call
    printStudent(s1);

    return 0;
}