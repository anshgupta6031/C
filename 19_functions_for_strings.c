


#include <stdio.h>
#include <string.h>       //  we have to import string library in order to use string functions. 

int main(){

    char st[] = "ansh";
    int a = strlen(st);     //   Gives the lenth of the string excluding the null character.
    printf("The length of string 'st' is %d.\n",a);

//**************************************************************************************************************************************

    char st2[45];
    strcpy(st2,st);         //   it copies the second passed string in the first one.
    printf("Now st2 is %s\n",st2);

//**************************************************************************************************************************************

    char st3[] = "hello";
    strcat(st3,st);         //   it adds(concatinates) the second passed string to the first one.
    printf("Now st3 is %s\n",st3);

//**************************************************************************************************************************************

    char s1[] = "abcde";
    char s2[] = "abcde";
    int x = strcmp(s1,s2);      //   it compares the two passed strings. Gives '0' if strings are equal, '1' if the crossponding ASCII values of first passed string is greater then the second one AND gives '-1' if the crossponding ASCII values of second passed string is greater than the first one.
    printf("the value of 'x' is %d\n",x);


//*******************************************************************************************************************************************

    strrev(s1);             //  it reverses the passed string.
    printf("%s\n",s1);


    return 0;
}