//Q138 Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/
#include <stdio.h>

// Define enum for colors
typedef enum {
    RED,
    YELLOW,
    GREEN,
    COLOR_COUNT  // Helper to track number of enum values
} Color;

int main() {
    // Array of enum names as strings
    const char *colorNames[] = {"RED", "YELLOW", "GREEN"};

    // Loop through and print each enum name with its value
    for (int i = 0; i < COLOR_COUNT; i++) {
        printf("%s=%d\n", colorNames[i], i);
    }

    return 0;
}