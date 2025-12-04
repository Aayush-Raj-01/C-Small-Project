#include <stdio.h>

int main(){
    char choice = '\0';
    float fah = 0.0f;
    float cel = 0.0f;

    printf("Teemperature Cnversion Program \n");
    printf("C. Celsius to Fahrenheit \n");
    printf("C. Fahrenheit  to Celsius \n");
    printf("Is the temp is in celsius (C) or Fahrenheit (F)? :  ");
    scanf("%c" , &choice);

    if(choice == 'C'){

        printf("Enter the temperature in Celsius: ");
        scanf("%f", &cel);
        fah = (cel * 9/ 5) + 32;
        printf("%.1f Celsius is equal to %.1f Fahrenheit \n", cel , fah );
    }
    else if (choice == 'F'){
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f", &fah);
        cel = (fah - 32)* 5 /9;
        printf("%.1f Fahrenheit is equal to %.1f Celsius \n", fah , cel );
    }
    else{
        printf("Invalid Choice ! plese selct C or D  \n");
    }
}