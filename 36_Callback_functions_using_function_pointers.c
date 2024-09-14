


#include <stdio.h>

int sum(int a, int b){
    return a+b;
}

void hello(int (*ptr)(int,int)){            //   Callback function is nothing but calling a function in another function giving the function pointer as a parameter.
    printf("Hello user.\n");
    printf("The sum of 3 and 7 is %d.\n", ptr(3,7));
}

void Good_Morning(int (*ptr)(int,int)){
    printf("Good Morning user.\n");
    printf("The sum of 3 and 7 is %d.\n", ptr(3,7));
}

int main(){

    int (*ptr)(int,int);
    ptr = &sum;

    hello(ptr);

    Good_Morning(ptr);


    return 0;
}