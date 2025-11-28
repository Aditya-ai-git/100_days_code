//Write a program to find the product of odd digits of a number.

#include <stdio.h>
int main()
{
    int i,n,d,p=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        if(d%2!=0)
        {
           p=p*d;
        }
        n=n/10;
    }
    printf("Product of off digits of a number is: %d",p);
    return 0;
}