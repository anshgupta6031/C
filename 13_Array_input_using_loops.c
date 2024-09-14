                                    //  ARRAY INPUT USING LOOP.



#include <stdio.h>

int main(){

    int marks[5];

    for (int i=0; i<5; i++){
        printf("Enter the marks of student %d : ",i+1);
        scanf("%d",&marks[i]);
    }

    for (int i=0; i<5; i++){
        printf("The marks of student %d is %d.\n", i+1, marks[i]);
    }


    return 0;
}


/*

Array can be initialised as follows -:

int abc[3] = {33,66,88};
or
int abc[] = {77,88,99,00,55,.............no definite amount of integers};

*/