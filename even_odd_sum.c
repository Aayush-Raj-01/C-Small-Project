#include <stdio.h>

int main(){
    char type;
    int a,b=0,d=0,e f;
    printf("Type 'E' for even or 'O' for odd for finding sum of that particular series\n-> ");
    scanf("%c",&type);
    printf("Type a Number to add upto that number\nNUMBER -> ");
    scanf("%d",&a);
    if(type =='e' || type =='E'){
        a = a/2;

        while(a>=d){
            f = d*2;
            b=b+f;
            d++;
            printf("%d \n",b);
        }
    }
    else if(type=='o' || type == 'O'){
        a = a/2;
        while(a>=d){
            f = (d*2) + 1;
            b=b+f;
            d++;
            printf("%d \n",b);
        }
    }
    else{
        printf("TYPE something valid\n");
    }
    printf("TOTAL WILL BE = %d",b);
    return 0;
}