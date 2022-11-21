#include<stdio.h>
int main()
{

    int a, b, ans ;
    scanf("%d%d",&a,&b);
    for(int i=a; i>=1; i--)
    {
        if(a%i==0 && b%i==0)
        {
            ans = i;
            break;
        }
    }
    printf(" GCD is %d ", ans);


    return 0;
}

