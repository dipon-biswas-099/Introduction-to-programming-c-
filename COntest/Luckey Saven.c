
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int N;
    scanf("%d",&N);
    for(int i=N; i>0; i--)
    {
        char value[25];
        char value2[25];
        int j,k;
        scanf("%s",value);
        int count=1;
        for(j=0, k=strlen(value)-1; j<strlen(value); j++,k--)
        {
            value2[k]=value[j];
        }
        for(j=0,k=0; j<strlen(value); j++,k++)
        {
            if(value2[k]!=value[j])
            {
                count=0;
            }
        }
        if(count==1)
        {
            if(strlen(value)>7)
            {
                printf("Case #2: %c%ld%c\n",value[0],strlen(value)-2,value[strlen(value)-1]);

            }
            else
            {
                printf("Case #3: %s\n",value);
            }
        }
        else
        {
            printf("Case #1: Not Palindrome\n");
        }

    }
    return 0;
}
