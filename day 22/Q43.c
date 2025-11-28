//Write a program to check if a number is a strong number.
#include <stdio.h>
int main()
{
    int temp,d, n,i,s=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        int p=1;
        d=temp%10;
        for(i=1;i<=d;i++)
        {
            p=p*i;
        }
        s=s+p;
        temp=temp/10;
    }
    if(s==n)
    {
        printf("It is a strong number");
    }
    else
    {
        printf("It is not a strong number");
    }
}