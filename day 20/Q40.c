//Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main() {
    int num, temp, bit, place = 1, onesComplement = 0;

    printf("Enter a binary number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        bit = temp % 10;
        bit = (bit == 0) ? 1 : 0;
        onesComplement += bit * place;
        temp /= 10;
        place *= 10;
    }

    printf("1's Complement = %d\n", onesComplement);
    return 0;
}
