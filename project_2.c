                                                //  STONE, PAPER, SCISSOR GAME.


#include <stdio.h>
#include <stdlib.h>  //  libraries for generating a random number.
#include <time.h>

int game(char choice, char computer){

    if (choice==computer){
        return 0;
    }

    else if ((choice=='s' && computer=='c') || (choice=='p' && computer=='s') || (choice=='c' && computer=='p')){
        return 1;
    }

    else{
        return -1;
    }
}

int main(){

    char choice, computer;
    int p;
    srand(time(0));
    p = rand()%100 + 1;   //   generating a random number between 1 - 100 for random selection of s, p and c by the computer.

    if (p<=33){
        computer = 's';
    }
    else if (p>33 && p<=66){
        computer = 'p';
    }
    else{
        computer = 'c';
    }

    // printf("%c\n",computer);      //  to know what computer chose.
    
    printf("Enter your choice : 's' for stone, 'p' for paper and 'c' for scissor.\n");
    scanf("%c",&choice);

    while (choice!='c' && choice!='p' && choice!='s'){
        printf("Invalid input.\n");
        printf("Enter your choice again.\n");
        fflush(stdin);
        scanf("%c",&choice);
    }

    int result = game(choice, computer);

    if (result == 1){
        printf("you win.\nThe computer chose %c",computer);
    }

    else if (result==0){
        printf("it's a tie.\nThe computer also chose the same.");
    }

    else if (result==-1){
        printf("you lose.\nThe computer chose %c",computer);
    }



    return 0;
}