//Write a program to check if a number is a perfect number.

#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n>0)
    {
        int s=0;
        for(i=1;i<=n/2;i++)
        {
            
            if(n%i==0)
            {
                s=s+i;
            }
            
        }
        if(s==n)
        {
            printf("it is a perfect number");
        }
        else{
            printf("it is not a perfect number");
        }
    }
    else
    {
        printf("it is not a perfect number");
    }
}