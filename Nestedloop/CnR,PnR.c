#include<stdio.h>

int fact(int x);
int main()
{
    int a;
    scanf("%d",&a);
    int ans =fact(a);
    printf("Factorial = %d ",ans);

    return 0;
}
int fact(int x)
{
    int res =1;
    for(int i=1;i<=x;i++)
    {
        res*=i;
    }
    return res;
}
