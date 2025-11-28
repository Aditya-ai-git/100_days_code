//Insert an element in an array at a given position.

#include <stdio.h>
int main()
{
    int s,n,i;
    printf("Enter the number of elements you want in array: ");
    scanf("%d",&n);
    int arr[n+1];
    printf("Enter the elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number you want to insert: ");
    scanf("%d",&s);
    int pos = 0;
    printf("Enter the position you want the element to be in: ");
    scanf("%d",&pos);
    for(i = n; i >= pos; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=s;
    
    printf("Array after insertion: ");
    for(i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
       

}
