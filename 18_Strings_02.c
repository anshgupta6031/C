             //   Had to make it saperate cause scanf and gets do not work in same program.
             //   they work but not in continious way.


#include <stdio.h>

int main(){

    char name2[50];
    printf("enter your name.\n");
    gets(name2);            //  While using gets() we don't need to specify any datatype because it is espacialised for string datatype.

    printf("Your name is %s\n",name2);
    puts(name2);            //    puts() prints the string and places the cursor on the next line.


    //   Once a string is defined using char st[] = "dytvuytviiu"; 
    //   it cannot be initialised to something else.
    //   even the following is also wrong using this syntax -:

    //   char b[45];
    //   b="sbhjbsf";

    //   this wll not work.

    //   But if it is defined using pointers, then it can be initialised to some other string.
    //   And the following will work -:

    //   char *b;
    //   b="sbhjbsf";

    

    char a;
    scanf("%c",&a);
    fflush(stdin);             //   This function is used to clear the input of previously entered char so that it can store a fresh value in it again.
    // getchar();              //    We can also use getchar(); function which will consume the enter key(\n) given by the user.
    scanf("%c",&a);
    printf("%c",a);
    return 0;
}