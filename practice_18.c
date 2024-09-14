                                //   A PROGRAM TO REVERSE ANY GIVEN ARRAY OF SIZE n.

                                                   //   LOGIC 1



#include <stdio.h>

void reverse ( int *ptr, int n){

    int reverse_arr[n];

    for (int i=0; i<n; i++){
        reverse_arr[i] = *ptr;
        ptr--;
    }

    printf("The reversed array is\n");

    for (int p=0; p<n; p++){
        printf("%d\n", reverse_arr[p]);
    }


}

int main(){

    int n;

    printf("Enter the size of array you want to reverse. ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the elements of the array.\n");
    for (int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    reverse (&arr[n-1], n);


    return 0;
}