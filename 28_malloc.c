                                                //  DYNAMIC MEMORY ALLOCATION.


#include <stdio.h>
#include <stdlib.h>     //  we have to import this library for using dynamic allocation.

int main(){

    int *ptr;
    ptr = (int *)malloc(5 * (sizeof(int)));     //  malloc stands for memory allocation. it allocates the memory in heap. The heap memory is reserved until freed by user. Hence freeing up the memory after use is recommended.
                                                //  here malloc() will allocate space for 5 integers in ptr address.
                                                //  As malloc returns a void pointer, therefore we have to typecast it into (int *).
                                                //  The expression returns a null pointer if the memory cannot be allocated.
    
    for (int i=0; i<5; i++){
        printf("Enter the value of element %d. ",i+1);
        scanf("%d",&ptr[i]);
    }

    for (int i=0; i<5; i++){
        printf("The value of element %d is : %d\n", i+1, ptr[i]);
    }

    free(ptr);


    //  free(ptr) is used to free up the memory after the work is done.
    //  freeing up the memory makes the program more efficient and avoids memory leak.


    return 0;
}