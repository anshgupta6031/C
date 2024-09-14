                                                //  PROGRAM TO SLICE THE ENTERED STRING.


#include <stdio.h>

void slice(char *str){
    int m,n;

    printf("slice from index ");
    scanf("%d",&m);     //  had to put scanf in a ddifferent function as gets and scanf do not work in a same function.

    printf("to index ");
    scanf("%d",&n);

    int i=0;

    while(i<(n-m+1)){
        str[i] = str[m-1 + i];
        i++;
    }
    str[i] = '\0';
}


int main(){

    printf("Enter the string to be sliced.");
    char *str;
    gets(str);

    slice(str);

    puts(str);


    return 0;
}