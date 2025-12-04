#include <stdio.h>
int main(){
int n,i,c=0,a=1,b=0;
printf("Type the number for the fabonacci series = ");
scanf(" %d",&n);
for(i=0;i<n;i++){
    printf("%d",c);
    c = a+b;
    a = b;
    b = c; 
}
return 0;
}