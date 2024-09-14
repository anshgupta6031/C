                                                    //  COMMAND LINE CALCULATOR.



#include <stdio.h>
#include <stdlib.h>         //  including this to use atoi() function.
#include <string.h>

float add(int a, int b){
    return a + b;
}

float subtract(int a, int b){
    return a - b;
}

float divide(int a, int b){
    return (float)a / b;
}

float multiply(int a, int b){
    return a * b;
}

int main(int argc, char *argv[]){

    int a, b;
    float result;

    char *opperation;
    opperation = argv[1];

    a = atoi(argv[2]);      //  atoi() changes string to a integer.
    b = atoi(argv[3]);


    if (strcmp(opperation, "add") == 0){
        result = add(a, b);
    }

    else if (strcmp(opperation, "subtract") == 0){
        result = subtract(a, b);
    }

    else if (strcmp(opperation, "divide") == 0){
        result = divide(a, b);
    }

    else if (strcmp(opperation, "multiply") == 0){
        result = multiply(a, b);
    }

    printf("result = %.2f",result);


    return 0;
}