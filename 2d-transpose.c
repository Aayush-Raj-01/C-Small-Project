#include<stdio.h>
void main(){
int a[5][5] , i ,j,b[5][5];
printf("Enter the elemetn in array = ");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
}

for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        c[i][j]=b[i][j] + a[i][j];
    }
}
printf("PRINT THE ARRAY\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d ",c[i][j]);
    }
printf("\n");
}
}