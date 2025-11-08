#include <stdio.h>
int main()
{
    int d,f=0;
    printf("Enter the number of units: ");
    scanf("%d",&d);
    if(d>=0 & d<=100)
    {
      f=5*d;
    }
    else if (d>100 & d<=200)
    {
      d=d-100;
      f=7*d+500;
    }
    else if (d>200 & d<=300)
    {
      d=d-200;
      f=10*d+1200;
    }
    else
    {
       d=d-300;
       f=12*d+2200;
    }
    printf("Electricity Bill = ₹%d",f);
    return 0;
}