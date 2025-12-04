#include<stdio.h>

int main(){
    int a=10,b=0,c=0,d=0;
    printf("Armstrong numbers between 1 to 100 :\n");
    while(a<100){
        a++;
        b=0;
        c=a;
        do{
            d = c%10;
            b=b+(d*d);
            c = c/10;
        }while(c!=0);
        if(a==b){
            printf("\n%d is a ARMSTRONG number.",a);
        }
    }
    return 0;
}