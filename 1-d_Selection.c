#include <stdio.h>
int main(){
    int n,i,j,c,a[100];
    printf("Enter the Element = ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n-1;i++){
        for(j=i;j<n;j++){
            if(a[i]>=a[j]){
                c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    }

    printf("Printing the Sorted Array");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;

    
    }