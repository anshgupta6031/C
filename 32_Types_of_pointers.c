#include <stdio.h>
#include <stdlib.h>

int main(){

    void *w;                 //  w is a void pointer which can now store the address of any datatype.
    int q = 45;
    char t;
    w = &q;                 //  here the void pointer is storing the address of an integer datatype.
    printf("%u\n",w);
    printf("%d\n", *((int *)w));      //  we can not dereference a void pointer by simply using *w, as its datatype is not defined. We first have to typecast that void pointer and then dereference it putting * before it.
    w = &t;                 //  here the same void pointer is storing the address of an char datatype.
    printf("%u\n\n\n**********************************************\n\n",w);


//*******************************************************************************************************************************************


    int *l = NULL;              //   Here l is null pointer which does not points anywhere. It is defined but does not have any address yet.
    printf("%x\n",l);           //   %x is used to get the address in hexadecimal form.
                                //   A null pointer is guaranteed to compare unequal to any pointer which points to a valid object.
                                //   A null pointer should not be dereferenced.
    l = &q;                     //   Now l is no more a null pointer. And hence it can now be dereferenced.
    printf("%x\n\n\n*********************************************\n\n",l);           //   It also has an address now.

    //   NULL pointer is a value whereas void pointer is a type.


//*****************************************************************************************************************************************************


    int *ptr;
    ptr = (int *)malloc(5 * (sizeof(int)));
    free(ptr);                  //   Now ptr is a dangling pointer.
                                //   A pointer pointing to a freed memory location or the location whose memory content has been deleted is called dangling pointer.
    printf("%x\n\n\n***********************************************\n\n",ptr);         //   As you can see it still points to an address.

    /*

    There can be 3 ways of creation of a dangling pointer --:

    1) Deallocation of a memory block, as done above.
    2) A function returning the address of a local variable. In this case the pointer becomes dangling because of the local scope of the variable in the function.
    3) If the variable to which the pointer is pointing goes out of scope, then the pointer will become dangling.

    */


//*************************************************************************************************************************************************


    int *abc;                   //   here abc is a wild pointer and points to some arbitrary memory location.
                                //   Uninitialised pointers are known as wild pointers.
                                //   It should not be derefrenced.



    return 0;
}