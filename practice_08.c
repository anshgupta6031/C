//   A PROGRAM TO PRINT THE FACTORIAL OF AN ENTERED NUMBER.


#include <stdio.h>

int main(){
    int n, factorial=1;
    printf("enter the number whose factorial you want to find\n");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        factorial = factorial * i;
    }


    printf("The factorial of %d is = %d\n", n, factorial);


    return 0;
}