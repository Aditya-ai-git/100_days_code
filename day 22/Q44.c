//Write a program to check if a number is a strong number.
#include <stdio.h>

int main() 
{
    int n, i;
    float sum = 0.0;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {

        float num = 2.0*i - 1;
        float den;
        if (i == 1) den = 1;
        else if (i == 2) den = 2;      
        else den = 2.0*i;   
        sum += num / den;
    }


    printf("Sum of the series = %.2f\n", sum);
    return 0;
}
