//    A PROGRAM TO PRINT n NATURAL NUMBERS IN REVERSE ORDER TILL 5.


#include <stdio.h>

int main(){
    int n;
    printf("enter the number of natural numbers you want to print in reverse order ");
    scanf("%d",&n);

    if (n>=5){
        for( ; n; n--){
        printf("%d\n",n);               // main program
        if (n==5){
            break;                      // break is used to get out of the for loop.
        }                               // continue skips the following part of the current loop and the loop continues.
        }
    }

                        //  program for input value less than 5

    else{
        printf("wrong input\nenter a number greater than 5 ");
        scanf("%d",&n);

        if (n>=5){
            for( ; n; n--){
            printf("%d\n",n);
            if (n==5){
                break;
            }
            }
        }
    }
    


    return 0;
}