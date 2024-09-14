            //   A structure is a collection of variables of different data types under a single name.


#include <stdio.h>

struct employee{        //  This declares a new user defined array type datatype i.e here, 'employee'.
    char *name;
    int  code;
    float salary;
}e2, e3;                 //   we can also define a structure while creating it. As here e2 nad e3 are defined.     //  this semicolon is important.

int main(){

    struct employee e1;       //   e1 variable is defined with employee datatype.
    e1.name = "Ansh";       //   dot(.) is known as member opperator.
    e1.code = 100;
    e1.salary = 45.53;

    //  struct employee e2;     //  e2 already defined in line 10.
    e2.name = "Aman";
    e2.code = 101;
    e2.salary = 43.565;

    //  struct employee e3;         //  e3 already defined in line 10.
    struct employee e3 = {"guru", 102, 41.925};     //  another way to define structures.
    // e3.name = "Guru";
    // e3.code = 102;
    // e3.salary = 41.925;


    printf("%s\n",e1.name);
    printf("%d\n",e1.code);
    printf("%.3f\n",e1.salary);


    printf("%s\n",e2.name);
    printf("%d\n",e2.code);
    printf("%.3f\n",e2.salary);


    printf("%s\n",e3.name);
    printf("%d\n",e3.code);
    printf("%.3f\n",e3.salary);


    return 0;
}