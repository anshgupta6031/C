                //  A PROGRAM TO SWAP 2 NUMBERS.



#include <stdio.h>

void wrong_swap(int a, int b);
void swap(int *a, int*b);

int main(){

    int x=3 , y=4;
    printf("The value of x and y before swap is %d and %d.\n",x,y);
    wrong_swap(x,y);
    printf("The value of x and y after wrong_swap is %d and %d.\n",x,y);
    swap(&x,&y);
    printf("The value of x and y after swap is %d and %d.\n",x,y);


    return 0;
}


void wrong_swap(int a, int b){       // this will not work as a copy of x and y is passed in a and b parameters.
int temp;                            // we can also do it without temp variable as follows :-
temp = b;                            //    a = a + b;
b = a;                               //    b = a - b;
a = temp;                            //    a = a - b;
}




void swap(int *a, int*b){             // this will work due to call by reference.
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;    
}
