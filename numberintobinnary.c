#include <stdio.h>
int main(){
    int dec,bin = 0, r = 0 , base = 1;
    printf("Type the number");
    scanf("%d",&dec);

    while(dec>0){
        r = dec %2;
        bin  = bin + r *base ;
        base = base *10;
        dec = dec /2;
    }
    printf("%d",bin);
    return 0;
}