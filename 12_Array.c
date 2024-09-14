                                //    ARRAY INPUT.


#include <stdio.h>

int main(){

    int marks[4];   // allocate space for 4 integers.
    printf("enter the marks of 4 students.\n");

    scanf("%d %d %d %d", &marks[0], &marks[1], &marks[2], &marks[3]);

    printf("The entered marks are %d, %d, %d and %d.\n", marks[0], marks[1], marks[2], marks[3]);


    return 0;
}