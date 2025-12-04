#include <stdio.h>
int main(){
    int a[100][100],b[100][100],c[100][100],i,j,n,k;
    printf("Enter the siue of array = ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            c[i][j] = 0;
            for(k=0;k<n;k++){
                c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
            }
        }
    }

    printf("printing multiplied array");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

}