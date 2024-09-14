//    A PROGRAM TO CHECK WHETHER A GIVEN NUMBER IS PRIME OR NOT, USEING LOOP.
//    DISCLAIMER :- THIS IS NOT THE BEST METHOD TO SOLVE THIS PROBLEM.


#include <stdio.h>

int main(){
    int n, prime=1;
    printf("enter a number\n");
    scanf("%d",&n);

    for(int i=2; i<n; i++){
        if (n%i==0){
            prime=0;
            break;
        }
    }

    if (prime==1 || n==2){
        printf("The entered number is a prime number\n");
    }

    else{
        printf("The entered number is not a prime number\n");
    }
    


    return 0;
}