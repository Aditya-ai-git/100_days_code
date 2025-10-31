#include <stdio.h>
int main()
{
    
    int i;
    int j;
    printf("enter first number (i) ");
    scanf("%d",&i);
    printf("enter second number (j) ");
    scanf("%d",&j);
    i=i+j;
    j=i-j;
    i=i-j;
    printf("i = %d",i);
    printf("j = %d",j);
    return 0;

}