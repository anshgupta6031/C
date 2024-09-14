//   A PROGRAM THAT GENERATES A RANDOM NUMBER BETWEEN 1 TO 100 AND ASKS THE PLAYER TO GUESS IT.


#include <stdio.h>
#include <stdlib.h>  //  libraries for generating a random number.
#include <time.h>


int main(){
    int n, p, count=0;
    srand(time(0));
    p = rand()%100 + 1;   //   generating a random number between 1 - 100.
    
    // printf("%d\n",p);  //   to know the random number.

    printf("Guess the number between 1 to 100. \n");
    scanf("%d",&n);


    while (p!=n){

        if (p>n){
            printf("Greater number please. \n");
            scanf("%d",&n);
        }

        else if (p<n){
            printf("Smaller number please. \n");
            scanf("%d",&n);
        }

        count++;
    }

    
    if (p==n){
        printf("CONGRATULATIONS YOU GUESSED THE RIGHT NUMBER.\n");
        count++;
        printf("YOU GUESSED THE CORRECT NUMBER IN %d GUSSES\n",count);
    }



    return 0;
}