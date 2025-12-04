#include <stdio.h>
 void main(){
    int a,i ,j;
    printf("Type a Number for the ROWS = ");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
 }