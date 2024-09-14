


#include <stdio.h>

int main(){

    FILE *ptr;
    ptr = fopen("zzz.txt", "w");

    int num=45;

    fprintf(ptr, "The number is %d.\n", num);     //  it writes the num variable into the file pointed through ptr.
    fprintf(ptr, "Thanks for using fprintf().");

    fputc('\n',ptr);         //  fputc() is used to write a character to any desired txt file.
    fputc('F',ptr);         //  It is used when file is open in the write mode.
    fputc('\n',ptr);

    char *a = "Thanks for using fputs().";
    fputs(a,ptr);           //  fputs() is used to write a string to any desired txt file.

    fclose(ptr);


//..........................................................................................................................................


    ptr = fopen("zzz.txt", "r");

    char *w;
    int n = 4;
    fgets(w, n, ptr);       //  fgets() is used to get a string of length n-1 (shown here) from any desired txt file.
    printf("%s",w);         //  n-1 length of string is fetched as the last character of the string to be stored in the char* variable needs to be the null character.

    printf("\n***********************************\n");

    char c;
    //  now reading from generated.txt character by character.
    while(c != EOF){        //  fgetc() returns EOF (end of file) when all the characters in a file are read.
        c = fgetc(ptr);     //  fgetc() is used to get a character from any desired txt file.
        printf("%c",c);     //  It is used when file is open in the read mode.
    }
    
    fclose(ptr);


    return 0;
}