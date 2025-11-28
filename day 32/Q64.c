//Find the digit that occurs the most times in an integer number.
#include <stdio.h>
int main()
{
    long n;
    int i,d=0,result,maxcount=0;
    printf("Enter the number: ");
    scanf("%ld",&n);
    long freq[10]={0};
    if(n<0)
    {
        n=-n;
    }
    
    while(n>0)
    {
        d=n%10;
        freq[d]++;
        n=n/10;
    }

    for(i = 0; i < 10; i++) 
     {
        if(freq[i] > maxcount)
        {
            maxcount=freq[i];
            result = i;
        }
    }
    printf("%d is repeated maximum times",result);
    return 0;
}