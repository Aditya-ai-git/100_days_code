//Search for an element in an array using linear search.
#include <stdio.h>

int main() 
{
    int n, i,se;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the numner you want to search: ");
    scanf("%d",&se);
    int arr[n]; 
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

    }
    for(i=1;i<=n;i++)
    {
        if(arr[i]==se)
        {
            printf("Number found at index %d",i);
            break;
        }
    }
    return 0;
}