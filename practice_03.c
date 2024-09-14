

//          PROGRAM TO FIND THE MAXIMUM OF FOUR NUMBERS.



#include <stdio.h>

int main(){
    float a, b, c, d, max;

    printf("enter first number\n");
    scanf("%f",&a);

    printf("enter second number\n");
    scanf("%f",&b);

    printf("enter third number\n");
    scanf("%f",&c);

    printf("enter fourth number\n");
    scanf("%f",&d);




    if (a>=b){
        max=a;
        if (a>=c){
            max=a;
            if (a>=d){
                max=a;
            }
            else{
                max=d;
            }
        }
        else{
            max=c;
            if (c>=d){
                max=c;
            }
            else{
                max=d;
            }
        }
    }


    else{
        max=b;
        if (b>=c){
            max=b;
            if (b>=d){
                max=b;
            }
            else{
                max=d;
            }
        }

        else{
            max=c;
            if (c>=d){
                max=c;
            }
            else{
                max=d;
            }
        }
    }




    printf("The maximum number input is %f\n",max);





    return 0;
}