// PROGRAM TO PRINT FIRST n NATURAL NUMBERS USING FOR LOOP.


#include <stdio.h>

int main(){
    int n;
    printf("enter the number of natural numbers you want to print ");
    scanf("%d",&n);

    for(int a=1; a<=n; a++){     // in for loop we first define a variable then write the condition and then write the increment syntax accordingly, and all this is done in only one line.
        printf("%d\n",a);
    }


    return 0;
}