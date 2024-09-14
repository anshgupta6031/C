// PROGRAM TO PRINT FIRST n NATURAL NUMBERS USING DO WHILE LOOP.

#include <stdio.h>

int main(){
    int i=1;
    int n;
    printf("enter the number of natural numbers you want to print\n");
    scanf("%d",&n);

    do{
        printf("%d\n", i++);
    }while(i<n+1);


    return 0;
}


//  do while loop first executes the program then checks the condition.
// therefore do while loop will always execute at least once.