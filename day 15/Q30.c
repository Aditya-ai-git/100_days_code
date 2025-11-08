#include <stdio.h>
int main()
{
    int d,r=0,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;
    }
    printf("Reverse number = %d",r);
    return 0;
}