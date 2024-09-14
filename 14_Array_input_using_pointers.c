                                    //   ARRAY INPUT USING POINTERS.



#include <stdio.h>

int main(){

    int marks[4];
    int *ptr = &marks[0];

    for (int i=0; i<4; i++){
        printf("Enter the marks of student %d : ",i+1);
        scanf("%d",ptr);
        ptr++;                      //   ptr++ for integer or float adds up 4 in the address of marks[0] (as int and float consume 4 bytes of storage) so to get address of marks[1].
    }                               //   in case of char ptr++ would only add 1 in its address as char uses only 1 byte of storage.

    ptr = &marks[0];

    for (int i=0; i<4; i++){
        printf("The marks of student %d is %d.\n", i+1, i[ptr]);    //  we can print it like this also.
    } 

    return 0;
}