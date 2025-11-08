#include <stdio.h>
int main()
{
    int s=1,i,n;
    printf("enter the number of first n even number: ");
    scanf("%d",&n);
    for(i=2;i<=n;i++ + i++)
    {
        s=s*i;
    }
    printf("Product of first n even numbers = %d",s);
    return 0;
}