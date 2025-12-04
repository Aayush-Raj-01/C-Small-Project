#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));

    int guess = 0;
    int tries = 0;
    int min = 50;
    int max = 100; 
    int answer = (rand() % (max - min + 1)) + min;
    printf("***NUMBER GUESSUNG GAME********\n");

    do{
        printf("Guess a number %d - %d : ",min,max);
        scanf(" %d",&guess);
        tries++;


        if(guess < answer){
            printf("TOO LOW\n");

        }
        else if(guess > answer){
            printf("TOO HIGH\n");
        }
        else{
            printf("CORRECT\n");
        }

    }while(guess != answer);
    printf("THE ANSWER IS %d \n",answer);
    printf("",tries);

    return 0;
}