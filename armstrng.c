#include <stdio.h>
int main(){
    int n,arm=0,r, c;
    printf("Enter any Number: ");
    scanf("%d", &n);
    c = n;

    while(n>0)
    {
        r=n%10;
        arm = (r*r*r)+arm;
        n=n/10;
        printf("%d\n",r);
        printf("%d \n",n);
    }
if(c==arm){
    printf("Armstrong Numbber");
}
else{
    printf("not");
}
return 0;

}