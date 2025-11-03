#include<stdio.h>
#include<stdlib.h>
#include <time.h>


int main(){
    srand(time(0));
    int player, computer = rand() % 3;


    /* 0-->SNAKE
       1-->WATER
       2-->GUN
    */


    printf("CHOOSE ONE:\n1.Snake\n2.Water\n3.Gun\n\n");
    scanf("%d", &player);
    printf("%d\n", computer);


    if(player == 0 && computer == 0){
        printf("ITS A DRAW!");
    }
    else if(player == 0 && computer == 1){
        printf("YOU WIN!");
    }
    else if(player == 0 && computer == 2){
        printf("YOU LOST!");
    }
    else if(player == 1 && computer == 0){
        printf("YOU LOST!");
    }
    else if(player == 1 && computer == 1){
        printf("ITS A DRAW!");
    }
    else if(player == 1 && computer == 2){
        printf("YOU WIN!");
    }
    else if(player == 2 && computer == 0){
        printf("YOU WIN!");
    }
    else if(player == 2 && computer == 1){
        printf("YOU LOST!");
    }
    else if(player == 2 && computer == 2){
        printf("ITS A DRAW!");
    }
    else
    printf("SOMETHING WENT WRONG!");

    return 0;
}