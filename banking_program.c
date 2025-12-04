#include <stdio.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);
int main(){
    int choice = 0;
    float balance = 0.0f;

    printf("****WELCOME TO THE ATM ****");
    do{
        printf("\nSelect an option");
        printf("\n1. Check Balance ");
        printf("\n2. Deposit Money ");
        printf("\n3. Withdraw Money ");
        printf("\n4. Exit ");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            checkBalance(balance);
            break;
            case 2:
            balance += deposit();
            break;
            case 3:
            balance -=withdraw(balance);
            break;
            case 4:
            printf("Thank You For Using our bank");
            break;
            default:
            printf("CHOICE IS INVALID, PLEASE CHOOSE SOMETHING VALID");
        }
        
    }while(choice!= 4);
    return 0;
}
void checkBalance(float balance){
    printf("\nYour current balance is: $%.2f",balance);

}
float deposit(){
    float amount = 0.0f;
    printf("\nEnter amount to be deposit: $");
    scanf("%f",&amount);
    if(amount<0){
        printf("\nINVALID AMOUNT");
        return 0.0f;
    }
    else{
        printf("\nSuccessfully deposited $%0.2f",amount);
        return amount;
    }
}
float withdraw(float balance){
    float amount = 0.0f;

    printf("\nEnter amount to withdraw: $");
    scanf("%f",&amount);


    if(amount > balance){
        printf("Insufficient fund! Your balance is $%0.2f",balance);
        return 0.0f;
    }
    else if(amount < 0){
        printf("Invalid amount!\n");
        return 0.0f;
    }
    else{
        printf("Succesfully withdrew $%.2f\n",amount);
        return amount;
    }

}