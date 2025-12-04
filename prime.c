#include <stdio.h>

int main(){
    int n,i=0,f=0,j=0,r;
    printf("prime number between 1 to 100/n");
    for(i=1;i<=100;i++){
        for(j=1;j<=i;j++){
            r=i%j;
            if(r==0){
                f++;
            }
        }
        if(f<3){
            printf("%d ",i);
        }
        f=0;
    }
    return 0;
}