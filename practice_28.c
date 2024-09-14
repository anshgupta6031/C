                                //  PROGRAM TO FIND No. OF OCCURENCE OF A GIVEN CHARACTER IN A STRING.


#include <stdio.h>

int occurence(char *str,char ch){
    int count=0;
    for(int i=0; str[i] != '\0'; i++){
        if (str[i]==ch){
            count+=1;
        }
    }
    return count;
}

int main(){

    char *str;

    printf("enter a string : ");
    gets(str);

    char ch;
    printf("enter the character whose no. of occurence you want to find : ");
    scanf("%c",&ch);

    printf("The character '%c' occured %d times in the string.\n", ch, occurence(str, ch));


    return 0;
}