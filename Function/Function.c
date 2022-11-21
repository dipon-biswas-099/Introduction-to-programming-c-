#include<stdio.h>

int sum(int x, int y)
{
    printf(" Adding two number....");
    return x+y;
}


int main()
{
    int a,b;
    a = sum( 2,3);
    printf("%d ",a);
    b =  sum(9,1);
    printf("%d ",b );

    return 0;
}
