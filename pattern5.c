#include<stdio.h>
void main(){
     int a,i ,j,o,n;
    printf("Type a Number for the ROWS = ");
    scanf("%d",&a);
    n=a;
    for(i=1;i<=a;i++){
        n--;
        for(o=n;o>=1;o--){
            printf(" ");
        }
        
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}