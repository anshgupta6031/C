#include <stdio.h>
#define pi 3.1428     //  Another way to define a constant whose value cannot be changed using a preprocessor directive.

int func1(){
    static int k = 0;           //  static variables preserve their values even when they go out of scope.
    k++;
    return k;
}

int main(){

    const int a = 55;   //  Now the value of a is constant and cannot be changed.
    printf("%d, %f\n", a, pi);

    printf("we can print '\\' in a string like this.\n");     //  as single '\' throws error, we have to use double '\' to print one.

    //  We can give more than one condition in the for loop, but the loop will work according to the last condition i.e. it will itterate itself until the last statement becomes false and the other statements do not matter.

    for (int i = 1, j = 1; j<4, i<7; i++, j++){
        printf("%d %d\n", j, i);
    }

    
    abc :
        printf("we are inside abc");
        goto end;       //  goto is a jump statement.
    
    goto abc;

    end:
        printf("the infinite loop is prevented now\n\n");



    //  Recursion is slower than the iterative approach because of time complexity.
    //  For example, running time for fibonacci series grows exponentially with input in case of recursive approach.
    

    int *x, y;  // here x is a pointer and y is an integer.


    
    int val = func1();
    printf("%d\n", val);
    val = func1();          //  when func1() is called for the second time it does not forget the value ok k which previously was 1, this time it skips line 5 and works with the value of k as 1.
    printf("%d\n", val);

    static char zcb;        //  if we do not initialize any static variable then it is automatically initialised to 0.
    printf("%d\n\n",zcb);


    return 0;
}