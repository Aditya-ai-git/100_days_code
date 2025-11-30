//Check if the elements on the diagonal of a matrix are distinct
#include <stdio.h>

int main() {
    int r, c, flag = 1;
    printf("Enter rows: ");
    scanf("%d", &r);
    printf("Enter cols: ");
    scanf("%d", &c);

    int a[100][100];
    printf("Enter elements:\n");
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i=0; i<r; i++) {
        for(int j=i+1; j<r && j<c; j++) {
            if(a[i][i] == a[j][j]) {
                flag = 0;
                break;
            }
        }
        if(flag == 0) break;
    }

    if(flag == 1)
        printf("Diagonal elements are distinct");
    else
        printf("Diagonal elements are not distinct");

    return 0;
}
