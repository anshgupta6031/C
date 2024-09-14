


#include <stdio.h>

typedef struct employee{
    char name[50];
    int salary;
}emp;

int main(){

    emp a[2];

    FILE *ptr;
    ptr = fopen("zzz.txt", "w");

    for (int i=0; i<2; i++){
        printf("enter the name of employee %d\n", i+1);
        scanf("%s",a[i].name);

        printf("enter the salary of employee %d\n", i+1);
        scanf("%d",&a[i].salary);

        fprintf(ptr, "%s, %d\n", a[i].name, a[i].salary);
    }


    fclose(ptr);

    return 0;
}