#include <stdio.h>
int main()
{
    int sum,x, n;

    int ara[120];

    scanf("%d",&n);
    sum=0;

    for(x=1; x<=n; x++)
    {
        scanf("%d %%",&ara[x]);

    }

    for(x=1; x<=n; x++)
    {
        if(ara[x]<=60)
        {
            sum=(60-ara[x])+100;
        }
        else if(ara[x]<=80)
        {
            sum=60+(80-ara[x])*2;
        }
        else
        {
            sum=(100-ara[x])*3;
        }
        printf("%d minutes\n",sum);
    }
    return 0;
}
