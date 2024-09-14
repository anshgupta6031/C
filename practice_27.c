                        //  PROGRAM TO ENCRYPT AND DECRYPT A STRING BY ADDING AND SUBTRACTING 1 FROM THEIR ASCII VALUE.


#include <stdio.h>

void encrypt(char *str){

    for(int i=0; str[i] != '\0'; i++){
        str[i] = str[i] + 1;
    }
}

void decrypt(char *str){
    for(int i=0; str[i] != '\0'; i++){
        str[i] = str[i] - 1;
    }
}

int main(){

    char *str;

    printf("enter a string : ");
    gets(str);

    encrypt(str);

    printf("The encrypted string is : %s\n",str);

    decrypt(str);

    printf("The string after decryption is : %s\n",str);


    return 0;
}