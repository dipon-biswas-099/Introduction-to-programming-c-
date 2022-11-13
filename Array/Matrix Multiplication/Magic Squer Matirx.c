
#include<stdio.h>
int main()
{
    int a[3][3];
    int  h1=0,h2=0,f=0,srow=0,scol=0;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(i==j)
            {
                h1 = h1+a[i][j];
            }
            if(i+j==3-1)
            {
                h2 = h2+a[i][j];
            }
        }
    }
    if(h1!=h2)
    {
        f=1;
    }
    else
    {
        for(int i=0; i<3; i++)
        {
            scol=0;
            srow=0;
            for(int j=0; j<3; j++)
            {
                scol=scol+a[i][j];
                srow=srow+a[i][j];
            }
            if(scol!=h1)
            {
                f=1;
            }
            else if(srow!=h1)
            {
                f=1;
            }
            else
            {
                f=0;
            }

        }
    }

    if(f==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}

