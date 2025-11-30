//Check if a matrix is symmetric.
#include <stdio.h>

int main() 
{
    int n, flag = 1;
    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    int a[100][100];

    printf("Enter elements:\n");
    for(int i=0; i<n; i++) 
    {
        for(int j=0; j<n; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i=0; i<n; i++) 
    {
        for(int j=0; j<n; j++) 
        {
            if(a[i][j] != a[j][i]) 
            {
                flag = 0;
                break;
            }
        }
        if(flag == 0) break;
    }

    if(flag == 1)
        printf("Matrix is symmetric");
    else
        printf("Matrix is not symmetric");

    return 0;
}
