#include <stdio.h>

int main()
{

    float physics, chemistry, maths;



    // INPUT CODE


    printf("Enter the marks obtained in physics\n");
    scanf("%f", &physics);

    if (physics > 100 || physics < 0)
    {
        printf("invalid marks\n");
        printf("Enter the marks obtained again\n");
        scanf("%f", &physics);
        printf("Enter the marks obtained in maths\n");
        scanf("%f", &maths);
        if (maths > 100 || maths < 0)
        {
            printf("invalid marks\n");
            printf("Enter the marks obtained again\n");
            scanf("%f", &maths);
        }
        printf("Enter the marks obtained in chemistry\n");
        scanf("%f", &chemistry);
        if (chemistry > 100 || chemistry < 0)
        {
            printf("invalid marks\n");
            printf("Enter the marks obtained again\n");
            scanf("%f", &chemistry);
        }
        
    }
    else
    {
        printf("Enter the marks obtained in chemistry\n");
        scanf("%f", &chemistry);

        if (chemistry > 100 || chemistry < 0)
        {
            printf("invalid marks\n");
            printf("Enter the marks obtained again\n");
            scanf("%f", &chemistry);
            printf("Enter the marks obtained in maths\n");
            scanf("%f", &maths);
            if (maths > 100 || maths < 0)
            {
                printf("invalid marks\n");
                printf("Enter the marks obtained again\n");
                scanf("%f", &maths);
            }
        }
        else
        {
            printf("Enter the marks obtained in maths\n");
            scanf("%f", &maths);

            if (maths > 100 || maths < 0)
            {
                printf("invalid marks\n");
                printf("Enter the marks obtained again\n");
                scanf("%f", &maths);
            }
        }
    }



    // PROCESSING CODE




    if (((physics + chemistry + maths)/3) >= 40 ){

        
        if (physics >= 33){
            printf("you passed physics exam\n");
        }
        else{
            printf("you did not pass physics exam\n");
        }




        if (chemistry >= 33){
            printf("you passed chemistry exam\n");
        }
        else{
            printf("you did not pass chemistry exam\n");
        }





        if (maths >= 33){
            printf("you passed maths exam\n\n\n");
        }
        else{
            printf("you did not pass maths exam\n\n\n");
        }



        if (physics<33 || chemistry<33 || maths<33){
            printf("you did not clear the exam\n\n");
        }
        else{
            printf("Congratulations you cleared the exam.\n\n");
        }




    }

    else{
        printf("You are failed\n");
        printf("You did not score more than 40 percent which is needed to pass\n\n");
    }





    return 0;
}