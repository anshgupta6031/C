


#include <stdio.h>

struct employee{
    char *name;
    int  code;
    float salary;
};


int main(){

    struct employee e1;
    struct employee *ptr;
    ptr = &e1;

    (*ptr).code = 100;      //  BRACKETS ARE NESSASSARY.
    printf("%d\n", e1.code);

    //  Instead of writing  (*ptr).code = 100;
    //  We can also write  ptr -> code = 100;
    //  here (->) is called arrow operator.

    ptr->salary = 234.34;
    printf("%.3f\n", e1.salary);
    

    return 0;
}