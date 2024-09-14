                   //   A PROGRAM TO PRINT THE MARKS OF n STUDENTS IN m SUBJECTS USING MULTIDIMENSIONAL ARRAY.




#include <stdio.h>

int main(){

    int students, subjects;

    printf("Enter the number of students : ");
    scanf("%d",&students);

    printf("Enter the number of subjects : ");
    scanf("%d",&subjects);


    int marks[students][subjects];


    for (int i = 0; i<students; i++){
        for (int j = 0; j<subjects; j++){
            printf("Enter the marks of student %d in subject %d.\n", i+1, j+1);
            scanf("%d",&marks[i][j]);
        }
    }


    for (int i = 0; i<students; i++){
        for (int j = 0; j<subjects; j++){
            printf("The marks of student %d in subject %d is %d.\n", i+1, j+1, marks[i][j]);
        }
    }


    return 0;
}