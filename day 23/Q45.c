//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>
int main()
{
    int i,n;
    float s=0.0;
    printf("Emter thr number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        float num=2*i;
        float den;
        if(i==1)
        {
            den=3;
        }
        else{
            den=4.0*i+1;
        }
        s=s+(num/den);
    }
    printf("Sum= %0.2f",s);
    return 0;
}