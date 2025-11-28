//Write a program to find the LCM of two numbers.
#include <stdio.h>
int main()
{
    int l,i,a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    for(i=2;i<=a*b;i++)
    {
        if(i%a==0&&i%b==0)
        {   
            l=i;
            break;
        }
    }
    printf("The lcm is: %d",l);
}