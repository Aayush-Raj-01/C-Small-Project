#include<stdio.h>
int main(){
int a[10], i ,even=0,odd=0,sum1=0,sum2=0,n;
printf("Enter the elemetn in array = ");
scanf("%d",&n);
printf("enter the element=");
for(i=0;i<n;i++){

        scanf("%d",&a[i]);
    
}
for(i=0;i<n;i++)
{
    if(i%2==0)
    {
        even++;
    }
    else
    {
        odd++;
    }
}
printf("even is=%d",even);
printf("odd is=%d",odd);
for(i=0;i<n;i++)
{
    if(i%2==0)
{
    sum1=sum1+a[i];
}
else
{
    sum2=sum2+a[i];
}
}
printf("sum is=%d",sum1);
printf("sum is =%d",sum2);
return 0;
}
