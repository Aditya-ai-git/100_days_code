#include <stdio.h>
#include <math.h>
int main()
{
    int n,d,c=0,a=0,n1,n2;
    printf("Enter a number: ");
    scanf("%d",&n);
    n2=n;
    n1=n;
    while(n!=0)
    {
        n=n/10;
        c++;
    }
    while(n1!=0)
    {
        d=n1%10;
        a=a+(int)round(pow(d,c));
        n1=n1/10;
    }
    if(a==n2)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }
    return 0;

}