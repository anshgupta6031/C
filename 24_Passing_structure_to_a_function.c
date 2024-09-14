


#include <stdio.h>

struct employee{
    char *name;
    int  code;
    float salary;
};

void display(struct employee emp){
    printf("%s\n",emp.name);
    printf("%d\n",emp.code);
    printf("%.3f\n\n",emp.salary);

    emp.code = 30;
}

void change(struct employee *ptr){
    ptr->code = 30;
}


int main(){

    struct employee e;
    struct employee *ptr = &e;
    ptr->name = "Aman";
    ptr->code = 101;
    ptr->salary = 43.565;

    display(e);
    
    printf("%d\n",ptr->code);       //  does not change as the function is called by value.

    change(ptr);
    printf("%d\n",ptr->code);       //  now it gets changed as called by reference.

    return 0;
}