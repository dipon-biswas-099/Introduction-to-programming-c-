#include<stdio.h>
#include<string.h>

int func()
{
    int T,N,Sum;
    scanf("%d",&T);
    for(int i=1; i<=T; i--)
    {

        scanf("%d",&N);

        Sum=(N/4)-3;
        for(int j=1; j<=4; j++)
        {
            Sum=Sum+2;
            printf("%d ",Sum);

        }
        printf("\n");
    }
}

int main()
{

    func();


    return 0;
}
