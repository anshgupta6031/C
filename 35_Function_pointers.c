


#include <stdio.h>

int sum(int a, int b){
    return a+b;
}

int main(){

    printf("The sum of 1 and 2 is %d\n",sum(1,2));
                                    //   Function pointers point to code not data.
    int (*ptr)(int,int);            //   Declaring a function pointer.
                                    //   NOTE :-- Brackets are important.
    ptr = &sum;                     //   Creating a function pointer.
                                    //   we can also remove '&' before sum.

    int d = (*ptr)(5, 6);           //   Derefrencing a function pointer.
    printf("The value of d is %d",d);


    return 0;
}