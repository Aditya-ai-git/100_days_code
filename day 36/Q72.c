//Find the sum of all elements in a matrix.
#include <stdio.h>

int main() 
{
    int r, c, sum = 0;
    printf("Enter rows: ");
    scanf("%d", &r);
    printf("Enter cols: ");
    scanf("%d", &c);

    int a[100][100];

    printf("Enter elements:\n");
    for(int i=0; i<r; i++) 
    {
        for(int j=0; j<c; j++) 
        {
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
    }

    printf("Sum of all elements = %d", sum);
    return 0;
}
