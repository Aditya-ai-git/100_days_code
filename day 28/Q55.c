//Write a program to print all the prime numbers from 1 to n.
#include <stdio.h>
int main()
{
    int n,i,j;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        int flag=1;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=0;
            }
        }
        if(flag==1)
        {
            printf("%d ",i);
        }
    }
    return 0;
}