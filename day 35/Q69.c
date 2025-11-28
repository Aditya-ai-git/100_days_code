//Find the second largest element in an array.
#include <stdio.h>
int main()
{
    int n,i,max1=0,max2=0;
    printf("Enter the number of elements in an array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>max1)
        {
            max1=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]!=max1)
        {
            if(arr[i]>max2)
            {
                max2=arr[i];
            }
        }
    }
    printf("The second largest element in array is: %d",max2);
    return 0;
}