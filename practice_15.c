//  A PROGRAM TO PRINT THE ADDRESS OF A ENTERED VARIABLE.


#include <stdio.h>

int main(){

    int a;
    printf("enter a number \n");
    scanf("%d",&a);
    printf("The address of the entered value is %u.\n",&a);


    return 0;
}