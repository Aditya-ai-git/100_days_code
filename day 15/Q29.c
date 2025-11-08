#include <stdio.h>
int main()
{
    int s=1,i,n;
    printf("enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s*i;
    }
    printf("factorial of %d is = %d",n,s);
    return 0;
}