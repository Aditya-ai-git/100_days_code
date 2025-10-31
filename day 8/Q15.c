#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    int i;
    if ( c>='0' && c<='9')
    {
        printf("your character is a number");
    }
    else if ( c>='A' && c<='Z')
    {
        printf("your character is a upper case alphabet");

    }
    else if ( c>='a' && c<='z')
     {
         printf("your character is a lower case alphabet");

     }
     else
     {
         printf("your character is a special character");

     }
}    