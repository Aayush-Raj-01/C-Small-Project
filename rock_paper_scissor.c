#include<stdio.h>
#include <stdlib.h>
#include<time.h>

int compchoice();

int main(){
    char value;
    int comp,user=0,compe=0,userwin=0,play=1;
    printf("********************************\n");
    printf("Welcome to the Rock Paper Scissor Game\n");
    while(play){
        printf("FOR ROCK = 1\nPAPER = 2 \nSCISSORS = 3");
        printf("\nYOUR CHOICE = ");
        scanf(" %c",&value);
        comp = compchoice();
        if(value == comp){
            printf("\nITS A DRAW");
        }
        else{
            if(value == 1){
                userwin = (comp == 3)?1:0;
            }
            else if(value == 2){
                userwin = (comp == 1)?1:0;
            }
            else{
                userwin = (comp == 2)?1:0;
            }
        }
        if(userwin){
            printf("\nYOU WON");
            user++;
        }
        else{
            printf("\nYOU LOST");
            compe++;
        }
        printf("\nYOU = %d COMPUTER = %d\n",user,compe);
        printf("DO YOU WANNA CONTINUNE\nFOR YES = 1 FOR NO = 0\nYOUR CHOICE");
        scanf("%d",&play);
    }
if(user>>compe){
    printf("YOU WON YOUR SCORE IS %d AND COMPUTER = %d",user,compe);
}else{
    printf("COMPUTER WON YOUR SCORE IS %d AND COMPUTER = %d",user,compe);
}
return 0;
    
    
}

int compchoice(){
    int comp;
    srand(time(0));
    comp = (rand() % 3 ) + 1;
    return comp;
}