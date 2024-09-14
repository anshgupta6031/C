                                    //  PROGRAM TO COPY STRING WITHOUT USING strcpy() FUNCTION.
                                    //                          OR
                                    //  MAKE YOUR OWN strcpy() FUNCTION.


#include <stdio.h>

void cpy(char *str2, char *str){
    int i=0;
    for (i; str[i] != '\0'; i++){
        str2[i] = str[i];
    }
    str2[i] = '\0';
}

int main(){

    char str[50];           //  we can not make this string as "char *str;". IT DOSEN'T WORK. DON'T KNOW WHY.
    char *str2;

    printf("enter a string : ");
    gets(str);

    cpy(str2,str);

    puts(str2);


    return 0;
}