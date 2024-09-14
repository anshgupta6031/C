


#include <stdio.h>

int main(){

    char string[] = {'A','n','s','h','\0'};   //   '\0' (also called null character) tells that string is terminated.

    char str[] = "Ansh Gupta";                //  Another way of initializing string.


    for (int i=0; string[i]!='\0'; i++){
        printf("%c",string[i]);
    }

    printf("\n");

    for (int j=0; str[j]!='\0'; j++){
        printf("%c",str[j]);
    }

    printf("\n");

    char *ptr = "Guru";             //   Another way of initializing string using pointers.
    printf("%s\n",ptr);             //   convinient way of printing string.  i.e. use format specifier %s.
    printf("%s\n",str);

//**************************************************************************************************************************************

    char name[50];
    printf("enter your name.\n");
    scanf("%s",name);                  //   We do not use & before vaiable name in strings as the variable name is already the address of first element of the string.

    printf("Your name is %s\n",name);

    //   There is a problem in using scanf for strings as when we print them they only print the first word. i.e. they get terminated at space because scanf is separated/ terminated when an enter or space is passed.
    //   We can use gets() function instead of scanf() function for any multiword string.

    return 0;
}