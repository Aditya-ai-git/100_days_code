#include <stdio.h>
int main()
{
    printf("enter a temperature in celcius");
    float c;
    float f;
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("%f in farenhiet %f",c,f);
    return 0;
}