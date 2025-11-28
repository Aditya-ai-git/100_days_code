 //Write a program to swap the first and last digit of a number.
 #include <stdio.h>
 #include <math.h>
 int main()
 {
    int n,c=0,temp,temp2,i;
    printf("Enter the number:");
    scanf("%d",&n);
    temp=n;
    temp2=n;
    while (temp != 0)
    {
        temp = temp / 10;
        c++;
    }

    int l,a,b,d,n1=0,middle=0;
    while(temp2 >=10)
    {
        temp2=temp2/10;
    }
    a=temp2; // 1st digit
    b=n%10;// 2nd digit
    middle=n%(int)pow(10,c-1)/10;
    n1=b*(int)pow(10,c-1)+middle*10+a;
    printf("new number = %d",n1);
    
    return 0;
    
 }