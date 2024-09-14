


#include <stdio.h>
#include <stdlib.h>

int main(){

    //  calloc stands for continuous allocation.
    //  it initializes each memory block with a default value of 0.

    int *ptr;
    int n = 5;
    ptr = (int *)calloc(n, sizeof(int));    //  here calloc will allocate contiguous space for 5 integers in ptr address with a default value of 0.
                                            //  If the space is not available and the memory allocation fails, a null pointer is returned.


    for (int i=0; i<n; i++){
        printf("The value of element %d is : %d\n", i+1, ptr[i]);   //  we can see that all values are set as 0 as a default.
    }

    free(ptr);


    return 0;
}