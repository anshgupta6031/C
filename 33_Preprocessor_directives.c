//  Before running rename the main function of the #_Operators.c file as main2.
//  If not done it would show an error due to 2 main functions in this program.


#include <stdio.h>
#include "3_Operators.c"            //  here the contents of 3_Operators.c are imported to this file and can be used freely.
#define pi 3.1428                   //  here pi is a preprocessing variable which is fixed as 3.1428 value.
#define square(x) x*x               //  here square() is a macro, it can be used as a function.
                                    //  macros are faster than a function as they are a part of preprocessing unit which is processed before compilation.

int main(){
    float r = 5;
    float area_of_circle = pi * square(r);
    printf("The area of circle is %f\n\n", area_of_circle);

    main2();                        //  The contents of 3_Operators.c are imported to this file.

//  Following are some examples showing the use of some other predefined macros.

    printf("\nThis file's name is %s\n", __FILE__);
    printf("Today's date is %s\n", __DATE__);
    printf("Current time is %s\n", __TIME__);
    printf("Line no. is %d\n", __LINE__);
    printf("ANSI: %d\n\n", __STDC__);         //  gives 1 if the compiler compiles with the ANSI standards.


    return 0;

}