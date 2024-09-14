                                         //  PROGRAM TO FIND SUM OF TWO 2-D VECTORS.


#include <stdio.h>

typedef struct Two_Dimensional_Vector{
    int x;
    int y;
}vector;

void sum(vector a, vector b){

    vector sum;
    sum.x = a.x + b.x;
    sum.y = a.y + b.y;

    printf("The x and y components of the sum of a and b vectors are %d and %d respectivelly.\n",sum.x,sum.y);
}

int main(){

    vector a,b;
    a.x = 56;
    a.y = 33;

    printf("The x and y components of the vector 'a' are %d and %d respectivelly.\n",a.x,a.y);

    b.x = 16;
    b.y = 23;

    printf("The x and y components of the vector 'b' are %d and %d respectivelly.\n",b.x,b.y);

    sum(a,b);


    return 0;
}