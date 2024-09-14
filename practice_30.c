                    //  TAKE INPUT AND DISPLAY 5 COMPLEX NUMBERS USING LOOP(for input) AND RECURSION(for display).


#include <stdio.h>

typedef struct complex_no{
    int real;
    int imaginary;
}complex;

int display(int n, complex arr[]){
    if(n==6){
        return 0;
    }

    else{
        printf("complex no. %d is %d + %di\n", n, arr[n-1].real, arr[n-1].imaginary);
        n = n+1;
        display(n,arr);
    }
}

int main(){

    complex arr[5];

    for(int i=0; i<5; i++){
        printf("enter the real part of complex no. %d : ",i+1);
        scanf("%d",&arr[i].real);

        printf("enter the imaginary part of complex no. %d : ",i+1);
        scanf("%d",&arr[i].imaginary);
    }

    int n = 1;

    display(n,arr);


    return 0;
}