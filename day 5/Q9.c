#include <stdio.h>
int main()
{
    int p,r,t;
    float simple_intrest,compound_intrest,a;
    printf("Enter the princilpe value ");
    scanf("%d",&p);
    printf("Enter how much time you want ");
    scanf("%d",&t);
    printf("Enter the rate ");
    scanf("%d",&r);
    simple_intrest = (p*r*t)/100;
    a = p * pow((1 + r / 100.0), t);
    compound_intrest= a-p;
    printf("simple intrest = %f",simple_intrest);
    printf("compound intrest = %f",compound_intrest);
    return 0;
}