#include <stdio.h>
int main()
{
    int a,b,c,max;
    printf("Enter three integers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            max=a;
        }
        else
        {
            max=c;
        }
    }
    else
    {
       if(b>c)
        {
            max=b;
        }
        else
        {
            max=c;
        }
    }
    printf("maximum number is: %d ",max);
    return 0;
}