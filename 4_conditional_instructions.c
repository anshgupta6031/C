#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number \n");
    scanf("%d", &a);

    if (a % 2 == 0){
        printf("%d is an even number\n", a);
    }

    else{
        printf("%d is an odd number\n", a);
    }

    //  '&&' is used for 'and' logic.
    //  '||' is used for 'or' logic.
    //  '!' is used for 'not' logic.

    return 0;
}