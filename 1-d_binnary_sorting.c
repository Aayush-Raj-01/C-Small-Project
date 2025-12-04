#include <stdio.h>
int main(){
    int i,n,s,mid,end,sta=0,a[50];
    printf("Enter the Size of the Array");
    scanf("%d",&n);
    printf("Enter the elements in the Array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the number to be searched");
    scanf("%d",&s);
    mid = n/2;
    end = a[n-1];
    for(i=0;i<n;i++){
        if(a[mid]==s){
            break;
        }
        else if(a[mid]>s){
            end = mid -1 ;
            mid = (sta+end)/2;
        }
        else{
            sta = mid + 1;
            mid = (sta+end)/2;
        }

    }

    printf("The number was found on %d",mid+1);
    return 0;
}