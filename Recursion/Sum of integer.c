
#include<stdio.h>

int solve(int i, int n) // recursion
{
    if(i>n) return 0;
    int  s = solve(i+1,n);
    return s+i;
}

int main()
{
    int n ;
    scanf("%d",&n);
    int sum = solve(1,n);
    printf("%d\n",sum);



    return 0;
}
