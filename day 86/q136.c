//Q136 Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include <stdio.h>
#include <string.h>

typedef enum {
    ADD,
    SUBTRACT,
    MULTIPLY,
    INVALID
} Operation;

Operation getOperation(char *opStr) {
    if (strcmp(opStr, "ADD") == 0)
        return ADD;
    else if (strcmp(opStr, "SUBTRACT") == 0)
        return SUBTRACT;
    else if (strcmp(opStr, "MULTIPLY") == 0)
        return MULTIPLY;
    else
        return INVALID;
}

int main() {
    char opStr[20];
    int a, b;
    
    // Read input
    scanf("%s %d %d", opStr, &a, &b);

    // Convert string to enum
    Operation op = getOperation(opStr);

    // Perform operation
    switch (op) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
        default:
            printf("Invalid operation\n");
    }

    return 0;
}