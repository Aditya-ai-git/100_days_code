//Delete an element from an array.
#include <stdio.h>
int main()
{
    int i,n,d;
    printf("Enter the number of elements you want in array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter thr element you want to delete: ");
    scanf("%d",&d);
    for(i=d;i<n-1;i--)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("final array: \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}