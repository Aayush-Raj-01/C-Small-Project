#include <stdio.h>

int main() {
    int m, n, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);
    
    int mat[m][n];
    printf("Enter matrix elements:\n");
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);
    
    int mainSum = 0, secSum = 0;
    int min = (m < n) ? m : n;

    for(i = 0; i < min; i++) {
        mainSum += mat[i][i];
        secSum += mat[i][n - 1 - i];
    }
    
    printf("Sum of both diagonals: %d\n", mainSum + secSum);
    return 0;
}
