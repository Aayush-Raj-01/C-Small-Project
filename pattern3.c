#include <stdio.h>
 void main(){
    int a,i ,j;
    printf("Type a Number for the ROWS = ");
    scanf("%d",&a);
    for(i=a;i>=1;i--){
        
        for(j=i;j>=1;j--){
            printf("* ");
        }
        printf("\n");
    }
 }