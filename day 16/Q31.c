#include <stdio.h>
int main()
{
    int n,b=0,d,o,rev=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    o=n;
    while(n!=0)
    {
      d=n%2;
      b=b*10+d;
      n=n/2;
    }
     while (b != 0)
      {
        d = b % 10;
        rev = rev * 10 + d;
        b = b / 10;
    }
    if (o%2==0)
    {
      rev=rev*10;
    }

    printf("Binary equivalent of %d is = %d",o,rev);
    return 0;

}