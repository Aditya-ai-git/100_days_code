#include <stdio.h>
int main()
{
    int i;
    int j;
    int temp;
    printf("enter first number (i) ");
    scanf("%d",&i);
    printf("enter second number (j) ");
    scanf("%d",&j);
    temp=i;
    i=j;
    j=temp;
    printf("i= %d\n",i);
    printf("j= %d",j);
    return 0;
}