#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    int choice;
    float pounds,kilograms;

    printf("Weight Conversion Calculator \n");
    printf("1. Kilograms to pounds \n");
    printf("2. Pounds to Kilograms \n");
    printf("Enter your choice (1 or 2) :" );
    scanf("%d", &choice);

    if(choice == 1){
        printf("Enter the weights in Kilogram : ");
        scanf("%f",&kilograms);
        pounds = kilograms * 2.0462;
        printf("%.2f kilograms is equal to %.2f pounds \n", kilograms ,pounds);


    }
    else if(choice == 2){
        printf("Enter the weights in pounds : ");
        scanf("%f",&pounds);
         kilograms = pounds / 2.0462;
        printf("%.2f pounds is equal to %.2f kilograms \n", pounds ,kilograms);


    }
    else{
        printf("Invalid choice, Please choose between 1 & 2 \n");
    }
}