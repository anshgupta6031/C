


#include <stdio.h>

typedef struct employee{
    char *name;
    int  code;
    float salary;
} emp;

//  typedef is a keyword used to create an alias name for datatypes in C.

typedef int idk;

int main(){

//  We can use struct employee structure by emp keyword.

    emp *ptr;
    ptr->name = "Ansh";
    ptr->code = 102;
    ptr->salary = 342.432;

    
    printf("%s\n",ptr->name);
    printf("%d\n",ptr->code);
    printf("%.3f\n\n",ptr->salary);


    idk a = 55;     //   now we can also use idk keyword for int datatype.
    printf("%d\n",a);

    int b = 66;     //  int keyword is still valid even after specifying it to another keyword.
    printf("%d",b);


    return 0;
}

//  hence, typedef is mostly used with structures as the names of datatypes get too lengthy.