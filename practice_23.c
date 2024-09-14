            //   PROGRAM TO INPUT AND COMPARE TWO STRINGS BY TAKING INPUT OF ONE OF THE STRING CHARACTER BY CHARACTER.


#include <stdio.h>
#include <string.h>

int main(){

    char st1[50];
    char st2[50];
    char c;
    int i=0;

    printf("enter the first string.\n");
    scanf("%s",st1);

    printf("first entered string is %s\n",st1);

    printf("enter the second string character by character.\n");
    while(c!='\n'){
        fflush(stdin);  // As enter key is a valid input for char input, we need to flush (remove) the enter key after every atteration so that scanf does not take it as input.
        scanf("%c",&c);
        st2[i]=c;
        i++;
    }
    st2[i-1]='\0';  // written so that strcmp for same strings returns 0 and does not count last '\n' as a character.

    printf("the second entered string is %s\n",st2);

    printf("strcpm for st1 and st2 returns %d.\n",strcmp(st1,st2));


    return 0;
}