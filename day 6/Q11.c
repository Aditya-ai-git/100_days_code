#include <stdio.h>
int main()
{
    int i;
    printf(" Enter an integer: ");
    scanf("%d",&i);
    if (i%2==0)
    {
        printf("it is an even integer");
    }
    else
    {
        printf("it is an odd integer");
    }
    return 0;
}