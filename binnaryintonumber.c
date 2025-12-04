#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c = 0,d,i=0;
    printf("Give the binnary digits");
    scanf("%d",&a);
    while(a>0){
        d = a%10;
        a = a/10;
        c = c + d *pow(2,i);
        i++;
    }
    printf("%d",c);
    return 0;
}