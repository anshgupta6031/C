                                //   A PROGRAM TO REVERSE ANY GIVEN ARRAY OF SIZE n.

                                                   //   LOGIC 2



#include <stdio.h>


void reverse ( int *ptr, int n){
    int temp;
    for (int i=0; i<(n/2); i++){
        temp = ptr[i];
        ptr[i] = ptr[n-i-1];
        ptr[n-i-1] = temp;
    }

     printf("The reversed array is\n");

    for (int p=0; p<n; p++){
        printf("%d\n", ptr[p]);
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

    reverse(arr,n);



    return 0;
}