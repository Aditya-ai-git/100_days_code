//Find the sum of array elements.
#include <stdio.h>

int main() 
{
    int n, i,s=0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; 
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++)
    {
        s=s+arr[i];
    }
    printf("Ther sum of array elements is: %d",s);

    return 0;
}
