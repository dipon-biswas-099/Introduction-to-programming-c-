#include<stdio.h>

int gcm(int x, int y)
{
    for(int i=x;i>=1;i--)
    {
        if(x%i==0 && y%i==0)
        {
            return i;
        }
    }
}
int lcm(int a,int b)
{
    return (a*b)/gcm(a,b);
}

int main()
{
    int a ,b,Lcm, Gcm;
    scanf("%d%d",&a,&b);

   Gcm = gcm(a,b);
   Lcm = lcm(a,b);
    printf(" GCM  is %d\n", Gcm);
    printf(" LCm  is %d",Lcm );


    return 0;
}
