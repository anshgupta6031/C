#include <stdio.h>

int main(){
    int a=0;

    while (a<=100){      // while loop checks the condition and then executes the code.
        printf("%d\n",a);
        a=a+1;         //   we can write "a++" insted of "a=a+1"
    }


    return 0;
}