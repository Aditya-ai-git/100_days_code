//Count positive, negative, and zero elements in an array.
#include <stdio.h>

int main() 
{
    int n, i,p=0,ne=0,z=0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; 
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            ne++;
        }
        else if(arr[i]>0)
        {
            p++;
        }
        else
        {
            z++;
        }
        
    }
    printf("Positive=%d, Negative=%d, Zero=%d",p,ne,z);
    return 0;
}
