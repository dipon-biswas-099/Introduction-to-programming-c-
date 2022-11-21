#include<stdio.h>

    int max_num(int x, int y,int z)
    {
    if(x>y && x>z)
    {
        return x;
    }
    else if(y>x && y>z)
    {
        return y;
    }
    else
        return z;
    }

int main()
{
    int a,b,c,m;
    scanf("%d%d%d",&a,&b,&c);
     m= max_num(a,b,c);
     printf("the maximum number is %d ",m);


    return 0;
}
