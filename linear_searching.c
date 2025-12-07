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
    
    int sum = 0;
    for(i = 0; i < m && i < n; i++)
        sum += mat[i][i];
    
    printf("Sum of diagonal elements: %d\n", sum);
    return 0;
}
