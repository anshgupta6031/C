    // when a function calls itself repeatedly, it is called recursion.

    //   A PROGRAM TO PRINT THE FACTORIAL OF AN ENTERED NUMBER USING RECURSION.



#include <stdio.h>

int factorial(int a);
int p;

int main(){

    printf("enter a number whose factorial you want to find out.\n");
    scanf("%d",&p);

    printf("The factorial of %d is %d.\n", p,factorial(p));

    return 0;
}


int factorial(int a){

    if (a==1 || a==0){
        return 1;
    }

    else{
        return a * factorial(a-1);
    }

}

//   we can use %a.xf for a floating datatype having 'x' number of decimal places and 'a' number of spaces before the floating point number.