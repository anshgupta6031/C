#include <stdio.h>
#include <math.h> // we have to write this to import math library.

int main()
{
    int a = 50;
    a=47; // valua of a gets changed
    int A = 8;
    printf("a = %d\nA = %d\n", a, A);
    printf("remainder of a/A = %d\n", a % A); // % is used for remainder

    // There is no operator to perform exponentiation in C language.
    // However we can use pow() function from <math.h> library.

    printf("a ^ A = %d\n", pow(a, A));

    /*
    Priority order for operators in C is-----

    1.  * , / , %
    2. + , -
    3. =

    In case of a tie, operators are applied from left to right.
    */

    return 0;
}