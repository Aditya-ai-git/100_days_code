#include <stdio.h>
int main()
{
    printf("enter the number ");
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
      sum=sum+i;
    }
    printf("sum of the numbers = %d",sum);
    return 0;
}