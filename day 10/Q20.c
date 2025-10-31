#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number for a week between 0 to 6  sunday = 0 and saturday = 6: ");
    scanf("%d",&n);
    switch (n)
    {
        case 0 : printf("\nSunday");
        break;
        case 1 : printf("\nMonday");
        break;
        case 2 : printf("\nTuesday");
        break;
        case 3 : printf("\nWednesday");
        break;
        case 4 : printf("\nThrusday");
        break;
        case 5 : printf("\nFriday");
        break;
        case 6 : printf("\nSaturday");
        break;
        default : printf("\nplease select number from 0 to 6");

    }
    return 0;
}