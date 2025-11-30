//Add two matrices.
#include <stdio.h>

int main() 
{
    int r, c;
    printf("Enter rows: ");
    scanf("%d", &r);
    printf("Enter cols: ");
    scanf("%d", &c);

    int a[100][100], b[100][100], s[100][100];

    printf("Enter elements of first matrix:\n");
    for(int i=0; i<r; i++) 
    {
        for(int j=0; j<c; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for(int i=0; i<r; i++) 
    {
        for(int j=0; j<c; j++) 
        {
            scanf("%d", &b[i][j]);
        }
    }

    for(int i=0; i<r; i++) 
    {
        for(int j=0; j<c; j++) 
        {
            s[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum of matrices:\n");
    for(int i=0; i<r; i++) 
    {
        for(int j=0; j<c; j++) 
        {
            printf("%d ", s[i][j]);
        }
        printf("\n");
    }

    return 0;
}
