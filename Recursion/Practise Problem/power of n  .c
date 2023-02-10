#include<stdio.h>

int power(int base, int m)
{
    if(m!=0)
    {
        return (base * power(base, m-1));
    }
    else
    {
        return 1;
    }


}
int main()
{
    int base, pow;
    scanf("%d %d",&base,&pow);
    int result = power(base, pow);
    printf("%d",result);


    return 0;
}


