// ami ekta kaj korbo ar baki kaj recursion korbe ,,, ar kivabe korbe eta age cinta korte jabo na ,,
#include<stdio.h>
void solve(int i,int n)
{
    if(i>n) return; // recursion thamanor jonno condition
    printf("\n%d",i); //i =1
    solve(i+1,n);
}
int main()
{
    int n ;
    scanf("%d",&n);
    solve(1,n);
    return 0;
}
