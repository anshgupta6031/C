


#include <stdio.h>

typedef union employee{     //  Union is same as structure, the difference is that it uses a single shared memory location for all its members, that means here only one of either int or float will work as they share the same memory.
    int id;                 //  a union consumes lesser memory than a structure.
    float salary;
}emp;

int main(){

    emp e1;
    e1.id = 1;
    e1.salary = 45.9;       //  the one member which is defined last in a union gets secured and rest all get courrupted.

    printf("%d\n",e1.id);           //  here id gets courrupted and gives a garbage value as only one of either id or salary can work.
    printf("%.3f\n",e1.salary);


    return 0;
}