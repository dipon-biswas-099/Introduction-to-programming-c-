#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char S[21];
    int a,b;
    int i,count;
    int sum=0;
    int sub=0;
    scanf("%s",S);
    scanf("%d %d",&a,&b);
    for(i=0; i<sizeof(S); i++)
    {
        if(S[i]=='+')
        {
            sum=sum +(a+b);
        }
        if(S[i]=='*')
        {
            sub=sub +(a*b);
        }
        count =(sub+sum);
    }

    printf("%d",count);

    return 0;
}
