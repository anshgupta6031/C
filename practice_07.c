//    A PROGRAM TO FIND THE SUM OF n NATURAL NUMBERS USING WHILE LOOP.


#include <stdio.h>

int main(){
    int n, i=1, sum=0;
    printf("enter the number of natural numbers whose sum you want to find out\n");
    scanf("%d",&n);

    while(i<=n){
        sum = sum + i;
        i++;
    }


    printf("sum = %d\n",sum);


    return 0;
}