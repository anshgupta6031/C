//    A PROGRAM TO PRINT MULTIPLICATION TABLE OF AN ENTERED NUMBER n IN REVERSE ORDER


#include <stdio.h>

int main(){
    int n;
    printf("enter the number whose table you want to print\n");
    scanf("%d",&n);

    for(int i=10; i>0; i--){
        printf("%d x %d = %d\n", n, i, n*i);
    }


    return 0;
}