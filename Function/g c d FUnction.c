#include<stdio.h>

int gcd(int a, int b)
{
    for(int i=a; i>=1; i--)
    {
        if(a%i==0 && b%i==0)
        {
            return i;
        }
    }

}



int main()
{

    int a, b, ans ;
    scanf("%d%d",&a,&b);
    ans = gcd(a,b);

    printf(" GCD is %d ", ans);


    return 0;
}


