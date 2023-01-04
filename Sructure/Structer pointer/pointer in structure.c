#include<stdio.h>

struct Student
{


    double weight;
    int roll;
    int age ;

};

int main()
{
    struct Student s = {.roll=1,.weight=65.5};
    //  struct Student s2 ={.roll=1,.weight=65.5};

    struct Student* sp;

    sp=&s;

    // printf("%d\n", sizeof(struct Student));
    // printf("%p\n%p",sp,&s2);

    printf("%d %lf %d\n", sp->roll, sp->weight, sp->age);

    return 0;
}
