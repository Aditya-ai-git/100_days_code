//Q137 Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include <stdio.h>
#include <string.h>

// Define enum for user roles
typedef enum {
    ADMIN,
    USER,
    GUEST,
    INVALID
} Role;

// Convert string to enum
Role getRole(char *roleStr) {
    if (strcmp(roleStr, "ADMIN") == 0)
        return ADMIN;
    else if (strcmp(roleStr, "USER") == 0)
        return USER;
    else if (strcmp(roleStr, "GUEST") == 0)
        return GUEST;
    else
        return INVALID;
}

int main() {
    char roleStr[20];

    // Read input
    scanf("%s", roleStr);

    // Convert to enum
    Role role = getRole(roleStr);

    // Display message based on role
    switch (role) {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;
        case USER:
            printf("Welcome User!\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
        default:
            printf("Invalid role!\n");
    }

    return 0;
}