#include<stdio.h>

struct Student{
    char name[50];
    int roll;
    float mark;


};

int main()
{


    struct Student s ;
    printf("Enter information :\n");
    printf("Enter name:");
    scanf("%s",&s.name);
    printf("\nEnter roll number :");
    scanf("%d",&s.roll);

    printf("\nEnter marks :");
    scanf("%f",&s.mark);
    printf("\n\n");
    printf("Displaying Information \n");
    printf("Name = %s \nRoll number = %d\nMarks = %f\n ", s.name ,s.roll , s.mark );

    return 0;
}
