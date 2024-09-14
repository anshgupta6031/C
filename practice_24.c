                                 //   FIND LENGTH OF A STRING WITHOUT USING strln() FUNCTION.
                                 //                          OR
                                 //   MAKE YOUR OWN strlen() FUNCTION.


#include <stdio.h>

int strlen(char *str){

    int len=0;
    for(int i=0; *str!='\0'; i++){
        len++;
        str++;
   }
   return len;
}


int main(){

    char *str;
    printf("enter a string\n");
    gets(str);

    printf("length of the string is %d",strlen(str));


    return 0;
}