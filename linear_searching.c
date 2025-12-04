#include <stdio.h>
int main(){
    int n ,s,i;
    int a[n] ;
    printf("Enter the Numubers of element you wanna put in = ");
    scanf("%d",&n);
    printf("Enter the Number");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be Searched = ");
    scanf("%d",&s);
    for(i=0;i<n;i++){
        if(a[i]==s){
            break;
        }
    }

    printf("The element is placed on = %d",i+1);
    return 0;

}