
#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ara[n];
    int count = 0;
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&ara[i]);
    }
    for(int i=1; i<=n; i++)
    {
        if(ara[i]%3==0 || ara[i]%5==0)
        {
            count ++;
        }
        else
        {

        }
    }
    if(count != 0)
    {
        printf("%d",count);
    }
    else
    {
        printf("-1");
    }
return 0;
}
