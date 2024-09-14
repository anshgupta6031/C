                                           //  PROGRAM TO COMPARE TWO ENTERED DATES.


#include <stdio.h>

typedef struct date{
    int d;
    int m;
    int y;
}date;

void compare(date a, date b){
    if((a.y > b.y) || (a.y == b.y && a.m > b.m) || (a.y == b.y && a.m == b.m && a.d > b.d)){
        printf("date : %d %d %d is greater.", a.d, a.m, a.y);
    }

    else if(a.y == b.y && a.m == b.m && a.d == b.d){
        printf("Both entered dates are equal.");
    }

    else{
        printf("date : %d %d %d is greater.", b.d, b.m, b.y);
    }
}

int main(){

    date a,b;

    printf("Enter first date in 'dd mm yy' format : ");
    scanf("%d %d %d", &a.d, &a.m, &a.y);

    printf("Enter the second date in 'dd mm yy' format : ");
    scanf("%d %d %d", &b.d, &b.m, &b.y);

    compare(a,b);
    

    return 0;
}