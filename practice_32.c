                        //  PROGRAM TO GENERATE MULTIPLICATION TABLE OF A GIVEN No. IN TEXT FORMAT.


#include <stdio.h>

int main(){

    int n;
    printf("Enter the number whose table you want in a text file.\n");
    scanf("%d",&n);

    FILE *ptr;
    ptr = fopen("Table.txt", "w");

    for (int i=1; i<=10; i++){
        fprintf(ptr, "%d x %d = %d\n", n, i, n*i);
    }

    fclose(ptr);


    return 0;
}