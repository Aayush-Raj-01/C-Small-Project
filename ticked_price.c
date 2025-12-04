#include <stdio.h>
#include <stdbool.h>

int main(){

    float price = 10.00;
    char isStudent = '\0';
    bool st = false;
    bool se = false;
    printf("Are you a student? : \n");
    scanf("%c", &isStudent);
    char isSenior = '\0';
    printf("Are you a Senior? : \n");
    scanf("  %c", &isSenior);

    if(isStudent == 't'){
       st = true;
    }
    else{
        st = false;
    }
    if(isSenior == 't'){
        se = true;
    }
    else{
        se = false;
    }

if(st){
    if(se){
        printf("YOU GET A STUDENT DISCOUNT OF 10%\n");
        printf("YOU GET A SENIOR DISCOUNT OF 20%\n");
        price *= 0.7;
    }
    else{
        printf("YOU GET A STUDENT DISCOUNT OF 10%\n");
        price *= 0.9;
    }
}
else{
    if(se){
        printf("YOU GET A SENIOR DISCOUNT OF 20%\n");
        price *= 0.8;
    }
}


printf("The Price of a ticket is : $%.2f\n" , price);
return 0;

}