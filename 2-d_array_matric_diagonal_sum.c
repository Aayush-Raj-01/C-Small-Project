#include<stdio.h>
void main(){
int a[5][5] , i ,j,sum = 0,r=3,sum2=0;
printf("Enter the elemetn in array = ");
for(i=0;i<r;i++){
    for(j=0;j<r;j++){
        scanf("%d",&a[i][j]);
    }
}
for(i=0;i<r;i++){
    for(j=0;j<r;j++){
        if((i+j)==(r-1)){
            if(i!=j){
                
                sum = sum + a[i][j];
            }
            
        }
        if(i==j){
            sum= sum + a[i][j];
        }
    }
}

printf("\nThe sum of Diagonals = %d" , sum);
}