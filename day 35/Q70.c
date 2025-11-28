//Rotate an array to the right by k positions.
#include <stdio.h>

int main() 
{
    int n, k, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], result[n];

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k (right rotation): ");
    scanf("%d", &k);

    k = k % n; 
    for(i = 0; i < n; i++)
    {
        result[(i + k) % n] = arr[i];
    }

    printf("Rotated Array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", result[i]);

    return 0;
}
