


#include <stdio.h>

struct employee{
    char *name;
    int code;
    float salary;
};


int main(){

    struct employee facebook[6];      //  this will store 100 facebook array values of employee structure type.

    facebook[0].name = "ansh";
    facebook[0].code = 100;
    facebook[0].salary = 45.945;

    //    We can also take input as follows :--

    printf("enter the name of employee 1 : ");
    scanf("%s",&facebook[1].name);

    printf("enter the code of employee 1 : ");
    scanf("%d",&facebook[1].code);

    printf("enter the salary of employee 1 : ");
    scanf("%.3f",&facebook[1].salary);



    struct employee xyz = {"ajay",105,66.975};  //   another way of initialising structures.
    //  xyz is another variable of employee datatype.
    
    struct employee xyz1 = {0};     // here all elements of xyz1 are set as 0.






    return 0;
}