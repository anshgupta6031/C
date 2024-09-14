#include <stdio.h>

void display();   // function prototype
void morning();
void night();



int main(){

    printf("Initializing display function\n");
    display();   // display function called.
    printf("Display function finished its work\n");
    morning();
    night();

    return 0;
}



void display(){                             //   function definition.
    printf("this is display function\n");
}

void morning(){
    printf("Good Morning\n");
    printf("This is the second function.\n");
}

void night(){
    printf("Good Night\n");
    printf("This is the third function.\n");
}