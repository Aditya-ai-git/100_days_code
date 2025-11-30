//Find the transpose of a matrix
#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows: ");
    scanf("%d", &r);
    printf("Enter cols: ");
    scanf("%d", &c);

    int a[100][100], t[100][100];

    printf("Enter elements:\n");
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            t[j][i] = a[i][j];
        }
    }

    printf("Transpose:\n");
    for(int i=0; i<c; i++) {
        for(int j=0; j<r; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}
