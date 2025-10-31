#include <stdio.h>
int main()
{
    int a,b,c,d,m;
    float f;
    printf("enter a number");
    scanf("%d",&a);
    printf("enter another number");
    scanf("%d",&b);
    c=a+b;
    m=a*b;
    f=a/b;
    d=a-b;   
    printf("sum = %d\n",c);
    printf("difference= %d\n",d);
    printf("product = %d\n",m);
    printf("division = %f\n",f);
return 0;
}