#include <stdio.h>
int main()
{
    int d,r=0,n,temp;
    printf("Enter the number: ");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        d=n%10;
        r=d+r*10;
        n=n/10;
    }
    if(r==temp)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}