#include <stdio.h>
int main()
{
    int i,n;
    printf("enter the numbers: ");
    scanf("%d",&n);
    printf("factorial of the numbers are:\n ");
    for (i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d \n",i);
        }
    }  
    return 0;
}