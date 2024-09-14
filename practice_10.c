//   A PROGRAM TO FIND SUM, MULTIPLICATION, DIFFERENCE AND DIVISION OF 2 NUMBERS.


#include <stdio.h>

float sum(float a, float b);  // function prototypes.
float difference(float a, float b);
float product(float a, float b);
float division(float a, float b);


int main(){

    float p, q;
    int choice;     // choice had to be made int type as switch case does not support float datatype.
    

    printf("enter 1 if you want to find the sum of 2 numbers.\n");
    printf("enter 2 if you want to find the difference of 2 numbers.\n");
    printf("enter 3 if you want to find the product of 2 numbers.\n");
    printf("enter 4 if you want to divide 2 numbers.\n");
    scanf("%d",&choice);


    printf("enter the first number.\n");
    scanf("%f",&p);

    printf("enter the second number.\n");
    scanf("%f",&q);



    switch(choice){
        case 1:
            sum(p,q);
            break;
        
        case 2:
            difference(p,q);
            break;

        case 3:
            product(p,q);
            break;

        case 4:
            division(p,q);
            break;

        default:
            printf("invalid option");
            break;
    
    }


    return 0;
}





float sum(float a, float b){          // function definition.
    float sum;
    sum=a+b;
    printf("The sum is %f\n",sum);
}

float difference(float a, float b){          // function definition.
    float difference;
    difference=a-b;
    printf("The difference is %f\n",difference);
}

float product(float a, float b){          // function definition.
    float product;
    product=a*b;
    printf("The product is %f\n",product);
}

float division(float a, float b){          // function definition.
    float division;
    division=a/b;
    printf("The division is %f\n",division);
}