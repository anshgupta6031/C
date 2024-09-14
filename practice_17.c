                                //   A PROGRAM TO PRINT SUM AND AVG THROUGH A SINGLE FUNCTION.



#include <stdio.h>

void SumAndAvg(int x, int y, int *sum, float *avg);

int main(){

    int a=3, b=6, sum;
    float avg;

    SumAndAvg(a,b,&sum,&avg);

    printf("SUM = %d and AVG = %f\n",sum,avg);


    return 0;
}


void SumAndAvg(int x, int y, int *sum, float *avg){

    *sum = x + y;
    *avg = (float)(*sum)/2;
    
}