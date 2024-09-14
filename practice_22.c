                             //   A PROGRAM TO PRINT TABLE OF n NUMBERS USING FUNCTION AND 2-D ARRAY.



#include <stdio.h>

void MulTable(int *arr, int n){
    for (int i=0; i<10; i++){
        arr[i] = n*(i+1);
    }

    for (int i=0; i<10; i++){
        printf("%d x %d = %d\n", n, (i+1), arr[i]);
    }

    printf("\n\n*********************************************************************************\n\n");
}

int main(){

    int p;
    printf("Enter the number of multiplication table you want to print in one time. ");
    scanf("%d",&p);

    int arr[p][10];

    for (int i=0; i<p; i++){
        int r;
        printf("enter the %dth number whose table you want to print. ",i+1);
        scanf("%d",&r);
        MulTable(arr[0],r);
    }
    

    return 0;
}