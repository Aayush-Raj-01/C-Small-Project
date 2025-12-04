#include <stdio.h>
int main(){
    int n,m=1,i=1;
    printf("Type the number to find the number = ");
    scanf("%d",&n);
    while(n>=i){
        m = m*i;
        i++;
    }

    printf("%d",m);
}