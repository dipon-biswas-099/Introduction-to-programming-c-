#include<stdio.h>

struct Student{

    int roll;
    char name;
    float weight;

};



int main()
{
    struct Student s[10];
    int i;
    for(i=0;i<10;i++)
    {
        s[i].roll=11+i;
        s[i].weight=55+i*2;
    }
    for(i=0;i<10;i++)
    {
       printf("Roll = %d \nweight = %f\n ",s[i].roll,s[i].weight) ;
    }



    return 0;
}
