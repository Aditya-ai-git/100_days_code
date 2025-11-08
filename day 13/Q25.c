#include <stdio.h>
int main()
{ 
    int a,b,c;
    char o;
    printf("enter + or - or * or / or %: ");
    scanf("%c",&o);
    printf("ente 1st number: ");
    scanf("%d",&a);
    printf("ente 2nd number: ");
    scanf("%d",&b);
    switch(o)
    {
        case '+': 
        c=a+b;
        printf("sum = %d",c);
        break;

        case '-': 
        c=a-b;
        printf("difference = %d",c);
        break;
        
        case '/': 
        c=a/b;
        printf("division = %d",c);
        break;
        
        case '*': 
        c=a*b;
        printf("product = %d",c);
        break;
        
        case '%': 
        c=a%b;
        printf("mod = %d",c);
        break;

        default:
        printf("enter a correct operator");

    }
    return 0;
}