                                 //   A PROGRAM TO COUNT No. OF +ve NUMBERS IN AN ARRAY.


#include <stdio.h>

int number(int *arr, int n){
    int count=0;
    for (int i=0; i<n; i++){
        if (arr[i]>0){
            count+=1;
        }
    }
    return count;
}

int main(){

    int n;       //   int n, arr[n]; ----> This syntax is wrong. we cannot define a variable and an array under a same int statement.

    printf("Enter the number of integers you want in the array. ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the elements of the array.\n");

    for (int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("The number of possitive integers in the array is %d.\n", number(arr,n));

    return 0;
}