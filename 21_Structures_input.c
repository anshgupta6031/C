


#include <stdio.h>

struct employee{
    char *name;
    int code;
    float salary;
};

int main(){

    struct employee e1, e2, e3;

    printf("Enter the name, code and salary of employee 1 respectivelly.\n");
    gets(e1.name);
    scanf("%d",&e1.code);
    scanf("%f",&e1.salary);


    printf("Enter the name, code and salary of employee 2 respectivelly.\n");
    gets(e2.name);
    scanf("%d",&e2.code);
    scanf("%f",&e2.salary);


    printf("Enter the name, code and salary of employee 3 respectivelly.\n");
    gets(e3.name);
    scanf("%d",&e3.code);
    scanf("%f",&e3.salary);


    return 0;
}