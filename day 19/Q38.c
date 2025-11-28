//Write a program to find the sum of digits of a number.
#include <stdio.h>
int main()
{
    int i,n,d,s=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        s=s+d;
        n=n/10;
    }
    printf("Sum of digits of a number is: %d",s);
    return 0;
}