#include<stdio.h>
int main (){

    int w,n;
    int sum =0;

    printf("enter the number of passenger = ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        scanf("%d",&w);
        sum += w; //sum = sum + w;

    }

    printf("The total weight %d",sum);





return 0;

}
