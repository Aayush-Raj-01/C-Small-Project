#include <stdio.h>
int main(){
    int n,i,j,c,a[100];
    printf("Enter the Element = ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>=a[j+1]){
                c = a[j];
                a[j] = a[j+1];
                a[j+1] = c;
            }
        }
    }

    printf("Printing the Sorted Array");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;

    
    }