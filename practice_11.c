//  A PROGRAM TO PRINT nth VALUE OF FIBONACCI SERIES USING RECURSION.


#include <stdio.h>

int fib(int n);

int main(){

    int n;
    printf("enter the nth number of fibonacci series you want to find out.\n");
    scanf("%d",&n);
    printf("The %dth value in fibonacci series is %d.",n ,fib(n));


    return 0;
}


int fib(int n){
    int result;

    if(n==1){
        return 0;
    }


    else if(n==2){
        return 1;
    }
    
    else{
        result = fib(n-1) + fib(n-2);
        return result;
    }
}