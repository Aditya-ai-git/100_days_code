#include <stdio.h>
int main()
{
    int s,h,m,s1,a;
    printf("Enter time in seconds : ");
    scanf("%d",&s);
    h=s/3600;
    a=s-h*(3600);
    m=a/60;
    s1=a-m*(60);

    printf("%d hours, %d minutes, %d seconds", h, m, s1);
    return 0;
}