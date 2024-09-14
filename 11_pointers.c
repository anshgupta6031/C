#include <stdio.h>

int main(){

    int i=89;
    int *j;          // declaring j for storing the address of any integer datatype.
    j=&i;            // now j will store the address of i.

    printf("The address of i is %u.\n",&i);     // this gives the address of i.
    printf("The address of i is %u.\n",j);      // this gives the address of i.
    printf("The address of j is %u.\n",&j);     // this gives the address of j.

    printf("The value of i is %d.\n",i);        // this gives the value of i.
    printf("The value of i is %d.\n", *(&i));   // this gives the value of i.
    printf("The value of j is %d.\n",*(&j));    // this gives the value of j.


    return 0;
}


// for storing the address of j in any variable say 'k" we will have to make int **k = &j; variable which will 
// indeed have its own other memory address. This **k is known as a pointer to a pointer.

// * is called "dereference opperator" or in layman terms "value at address operator".

// for storing the address of any given datatype the pointer variable should also be made of same datatype.

// more than 1 pointers cannot be initialized at once. i.e. (int *p,*q;) will give error.