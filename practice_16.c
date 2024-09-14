                            //   A PROGRAM TO CHANGE THE VALUE OF A VARIABLE TO ITS TEN TIMES (USING POINTERS).


#include <stdio.h>

void tentimes(int *x);

int main(){


    int a = 5;
    tentimes(&a);
    printf("Ten times of a is %d",a);


    return 0;
}


void tentimes(int *x){
    *x = 10 * (*x);

}