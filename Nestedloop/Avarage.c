#include<stdio.h>
int main(){

    float sum,avg,x;

    for(int i=1;i<=10; i++)     //for each student
    {
        printf("Avarage result of %dth student \n",i);

        sum=0.0;

        for(int j=1; j<=3; j++)   //result input for 3 subject.
        {
            scanf("%f",&x);
            sum+=x;
            //sum= sum+x;
        }
        avg = sum/3;
        printf("Avarage = %f\n",avg);



    }






return 0;

}
