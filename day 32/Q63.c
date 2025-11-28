//Merge two arrays.
#include <stdio.h> 
int main()
{
    int i,n,n1;
    printf("Enter the number of elements in first array ");
    scanf("%d",&n);
    printf("Enter the number of elements in second array ");
    scanf("%d",&n1);
    int n2=n+n1;
    int arr[n],arr1[n1],arr2[n2];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
     printf("Enter %d elements:\n", n1);
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for(i = 0; i < n; i++)
    {
        arr2[i]=arr[i];
    }
    for(i = 0; i < n1; i++)
    {
        arr2[n + i] = arr1[i];
    }
    printf("the merged array is: ");
    for(i = 0; i < n2; i++)
    {
        printf("%d ", arr2[i]);
    }
    return  0;
}
