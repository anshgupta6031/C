

//       PRINT NATURAL NUMBERS FROM 10 TO 20 WHEN INITIAL LOOP COUNTER ie.i IS INITIALIZED TO 0.



#include <stdio.h>

int main(){
    int i=0;
    while(i<=20){
        i=i+1;
        while(i>=10 && i<=20){      //    instead of another while loop we can also simply use if statement.
            printf("%d\n",i);
            i++;          //    same as i=i+1;
        }
    }


    return 0;
}


//    i++ means pehle print phir increment
//    ++i means pehle increment phir ptint

//    i-- is used for decrement by 1.
//    i+=x  is used for increment by x.