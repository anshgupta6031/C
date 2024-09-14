//    A PROGRAM TO PRINT THE GIVEN PATTERN USING FUNCTION AND RECURSION.


#include <stdio.h>

void pattern(int a);
int n;

int main(){

    printf("enter the number of lines of pattern.\n");
    scanf("%d",&n);

    pattern(n);


    return 0;
}


void pattern(int a){
    if (a==1){
        printf("*\n");
        return;     //  return is neccessary because it allows the program to keep running. if it is not used the program terminates.
    }

    pattern(a-1);

    for(int i=1; i<=a; i++){

        printf("*");

    }

    printf("\n");

}