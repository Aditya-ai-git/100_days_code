//Search in a sorted array using binary search.

#include <stdio.h>
int main()
{
    int n,i,s;
    printf("Enter the number of element you want in array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of a sorted array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element you want to search: \n");
    scanf("%d",&s);
    int low=0,high=n-1,mid;
    int f=0;
    while (low<=high)
    {
        mid=(low+high)/2;
        if(s==arr[mid])
        {
            f=1;
            break;
        }
        else if(s<arr[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    if(f==1)
    {
        printf("%d found at %d",s,mid);
    }
    else
    {
        printf("%d is not in this array",s);
    }
    return 0;
    

}