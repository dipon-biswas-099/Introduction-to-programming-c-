#include<stdio.h>

struct Student{

    int roll;
    char name[50];
    int age;
    float weight;


};

int main()
{
    int a;
    struct Student s = {12,"Dipon",24,75.5};    // student type er variable  s ;

    struct Student s2 ;
    scanf("%d %s %d %f ",&s2.roll,&s2.name,&s2.age,&s2.weight);
   /* s.roll = 12;
    s.age = 24;
    s.weight = 75.5;*/

    a=7;
    printf("This info for student 1 .\n");
    printf("roll = %d\nname = %s\nage = %d\nweight = %f \n\n\n", s.roll ,s.name , s.age , s.weight);
    printf("this info for student 2 \n");
    printf("roll = %d\nname = %s\nage = %d\nweight = %f ", s2.roll ,s2.name , s2.age , s2.weight);

    return 0;
}
