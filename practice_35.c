


#include <stdio.h>
#include <stdlib.h>

int main(){

    int k, n;
    char *ptr;
    printf("Enter the no. of employees\n");
    scanf("%d",&k);

    for(int i=0; i<k; i++){
        printf("Enter the no. of characters in the ID of employee %d.\n",i+1);
        scanf("%d",&n);

        ptr = (char*)calloc(n, sizeof(char));

        printf("Enter the ID. :- ");

        scanf("%s",ptr);

        printf("The entered ID of employee %d is :- ",i+1);

        for(int u=0; u<n; u++){
            printf("%c",ptr[u]);
        }

        printf("\n");

        free(ptr);

    }


    return 0;
}