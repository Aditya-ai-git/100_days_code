#include <stdio.h>
int main()
{
    int a,b,min,c,i;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    if(a>b)
    {
        min=b;
    }
    else
    {
        min=a;
    }
    for(i=1;i<=min;i++)
    {
        if(a%i==0&&b%i==0)
        {
            c=i;
        }
    }
    printf("The gcd is: %d",c);
    return 0;

}