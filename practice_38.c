                            //  ANOTHER (SMARTER) WAY TO CHECK IF A NUMBER IS PALINDROME OR NOT.


#include <stdio.h>

int main(){

    long int number, temp;
    int sum = 0, remainder;

    printf("Enter a number : ");
    scanf("%d",&number);

    temp = number;

    while (number >0){
        remainder = number % 10;
        sum = (sum * 10) + remainder;
        number = number / 10;
    }

    if (sum == temp){
        printf("pelhar");
    }

    else{
        printf("not pelhar");
    }


    return 0;
}