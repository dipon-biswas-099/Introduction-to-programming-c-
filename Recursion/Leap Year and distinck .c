#include<stdio.h>
int Leap(int x)
{
    if((x%400==0) || (x%4==0 && x%100!=0))
        return 1;
    else
        return 0;
}
int distinct(int n)
{
    int last_digit;
    int count_digit[10]={0,0,0,0,0,0,0,0,0,0};
    while(n>0)
    {
        last_digit =n%10;
        count_digit[last_digit]++;
        n/=10;
    }
    int i;
    for(i=0;i<10;i++)
    {
        if(count_digit[i]>1)
        {
            return 0;
        }
    }
    return 1;


}


int main()
{
    int year;
    scanf("%d",&year);
    if(Leap(year)==1 && distinct(year)==1)
    {
        printf("Beautiful\n");
    }
    else
    {
        printf("Ugly");
    }



    return 0;
}
