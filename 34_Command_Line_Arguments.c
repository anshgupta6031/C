


#include <stdio.h>

int main(int argc, char *argv[]){       //   Here argv[] is a pointer array which stores the addresses of the passed arguments.
                                        //   The arguments are given in the terminal (command line).
                                        //   argc stores the no. of arguments passed in the command line.
                                        //   For example, for this program the arguments will be passed as shown bellow :--

                                        //   e:\C\34_Command_Line_Arguments.exe argument2 argument3 argument4.......................
                                        //   Here, the arguments are strings.
                                        //   An example can be - .\34_Command_Line_Arguments.exe ahj abh ahb
                                        //   The first argument at index no. 0 of the argv array is always the name of the program (including its path) i.e. the name is also considered as an argument.


    printf("The value of argc is %d.\n", argc);

    if (argc >=2){                      //   argc is 1 if no arguments are passed.

        for(int i=0; i < argc; i++){
            printf("The argument at index no. %d has value - %s\n", i, argv[i]);
        }
    }

    //  Using command line arguments we can give inputs through the command line while running a program.

    return 0;
}