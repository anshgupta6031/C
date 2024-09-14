                                  //   A PROGRAM TO PRINT TABLE OF 2,7,9 USING 2-D ARRAY.



#include <stdio.h>

int main(){

    int arr[3][10];

    for (int i=0; i<10; i++){
        arr[0][i] = 2*(i+1);
        arr[1][i] = 7*(i+1);
        arr[2][i] = 9*(i+1);
        }

    for (int i=0; i<10; i++){
        printf("%d x %d = %d\n", 2, (i+1), arr[0][i]);
    }
    printf("\n\n");
    for (int i=0; i<10; i++){
        printf("%d x %d = %d\n", 7, (i+1), arr[1][i]);
    }
    printf("\n\n");
    for (int i=0; i<10; i++){
        printf("%d x %d = %d\n", 9, (i+1), arr[2][i]);
    }


    return 0;
}