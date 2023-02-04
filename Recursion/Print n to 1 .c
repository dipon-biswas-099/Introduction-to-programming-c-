// ami ekta kaj korbo ar baki kaj recursion korbe ,,, ar kivabe korbe eta age cinta korte jabo na ,,
#include<stdio.h>
void solve(int n)
{
    if(n==0) return; // recursion thamanor jonno condition
    printf("\n%d",n);
    solve(n-1);
}


int main()
{

    int n ;
    scanf("%d",&n);
    solve(n);
    return 0;
}

