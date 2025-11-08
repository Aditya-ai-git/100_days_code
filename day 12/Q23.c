#include <stdio.h>
int main()
{
    int d,f=0;
    printf("Enter the number of days: ");
    scanf("%d",&d);
    if(d>=0 & d<=5)
    {
      f=2*d;
    }
    else if (d>5 & d<=10)
    {
      d=d-5;
      f=4*d+10;
    }
    else if (d>10 & d<=20)
    {
      d=d-10;
      f=6*d+30;
    }
    else
    {
        printf("Membership cancelled");
    }
    printf("fine = ₹%d",f);
    return 0;
}