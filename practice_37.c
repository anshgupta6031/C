                                        //  CHECKING IF A NUMBER IS PALINDROME OR NOT.


#include <stdio.h>

void reverse ( int *ptr, int n){            //      FUNCTION FOR ARRAY REVERSAL.
    int temp;
    for (int i=0; i<(n/2); i++){
        temp = ptr[i];
        ptr[i] = ptr[n-i-1];
        ptr[n-i-1] = temp;
    }
}


int main(){

    int arr[50];
    int arr2[50];
    long int number;
    int remainder, count =0, flag = 0;

    printf("Enter a number : ");
    scanf("%d",&number);

    for (int i = 0; number != 0; i++){
        remainder = number % 10;
        number = number / 10;
        arr[i] = remainder;
        arr2[i] = remainder;            //  CREATING TWO EQUAL ARRAY SO THAT ONE CAN BE REVERSED TO COMPARED WITH OTHER.
        count +=1;
    }

    reverse(arr,count);

    for (int j = 0; j<count; j++){      //   COMPARING BOTH ARRAYS.
        if (arr[j] != arr2[j]){
            flag = 1;
        }
    }

    if (flag == 1){
        printf("not pelhar");
    }

    else{
        printf("pelhar");
    }


    return 0;
}