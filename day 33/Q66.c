//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>
int main()
{
    int s,n,i;
    printf("Enter the number of elements you want in array: ");
    scanf("%d",&n);
    int arr[n+1];
    printf("Enter the elements of sorted array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number you want to insert: ");
    scanf("%d",&s);
    int pos = 0;
    while(pos < n && arr[pos] < s)
    {
        pos++;
    }
    for(i = n; i > pos; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=s;
    
    printf("Array after insertion: ");
    for(i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
       

}
