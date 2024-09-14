


#include <stdio.h>

int main(){

    FILE *ptr;          //  FILE is a pre built structure and ptr is its pointer.
    ptr = fopen("26_file_basics.txt", "r");         //  opening the file to access in reading mode.
                                            //  if the file does not exist then fopen() returns 'NULL'.

    //  if the file is opened in write mode ("w"), then the content already stored in the file is revoved to write a new one.
    //  in write mode, if the file does not exist, it is automatically created.

    //  if the file is opened in append mode ("a"), the new written text is apended to the pre-existing one.
    //  in append mode, if the file does not exist, it is automatically created.

    if (ptr == NULL){
        printf("THIS FILE DOES NOT EXIST.\n");
    }

    else{
        int num;
        fscanf(ptr, "%d", &num);        //   it reads the first integer from 26_file_basics.txt file and stores it in num variable.
        printf("the value of num is %d\n",num);

        int num2;
        fscanf(ptr, "%d", &num2);       //   now it reads the second integer from 26_file_basics.txt file and stores it in num2 variable.
        printf("the value of num2 is %d\n",num2);
    }
    
    fclose(ptr);


    return 0;
}