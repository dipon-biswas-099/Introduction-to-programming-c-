#include<stdio.h>
                // sum of 1+2+3+4+5+...+n by using recursion .
int s(int x)
{
    if(x==1)
        return 1;
    else
    {
        return s(x-1)+x;
    }


}
int main()
{
    int n;
    scanf("%d",&n);

    int sum = s(n);
    printf("%d\n",sum);


    return 0;
}
