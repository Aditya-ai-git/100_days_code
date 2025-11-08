#include <stdio.h>
int main()
{
    int s=0,i,n;
    printf("enter the number of first n odd number: ");
    scanf("%d",&n);
    for(i=1;i<=2*n;i++ + i++)
    {
        s=s+i;
    }
    printf("Sum of first n odd numbers = %d",s);
    return 0;
}