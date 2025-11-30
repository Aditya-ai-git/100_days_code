//Q140 Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include <stdio.h>
#include <string.h>

// Define enum for gender
typedef enum {
    MALE,
    FEMALE,
    OTHER,
    INVALID
} Gender;

// Define struct for person
typedef struct {
    Gender gender;
} Person;

// Convert string to enum
Gender getGender(char *str) {
    if (strcmp(str, "MALE") == 0)
        return MALE;
    else if (strcmp(str, "FEMALE") == 0)
        return FEMALE;
    else if (strcmp(str, "OTHER") == 0)
        return OTHER;
    else
        return INVALID;
}

// Print gender
void printGender(Gender g) {
    switch (g) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Invalid gender\n");
    }
}

int main() {
    char input[20];
    scanf("%s", input);

    Person p;
    p.gender = getGender(input);

    printGender(p.gender);

    return 0;
}