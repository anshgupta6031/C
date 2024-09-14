#include <stdio.h>

int main(){
    int rating;
    printf("Enter the rating between 1-5\n");
    scanf("%d",&rating);

    switch(rating){          // rating has to be a int or char.
        case 1:
            printf("The rating given by you is 1\n");
            break;                  // break is used to get out of the switch condition
                                    // if break is not used, all the cases below the triggered case along with the default case are also executed.
        case 2:
            printf("The rating given by you is 2\n");
            break;

        case 3:
            printf("The rating given by you is 3\n");
            break;

        case 4:
            printf("The rating given by you is 4\n");
            break;

        case 5:
            printf("The rating given by you is 5\n");
            break;

        default:           // default is executed if none of the cases are triggered.
            printf("invalid rating\n");
            break;

        }


    return 0;
}