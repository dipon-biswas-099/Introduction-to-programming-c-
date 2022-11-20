#include<stdio.h>
#include<string.h>
int main()
{
    int n,count=1;
    int max=1;

    scanf("%d",&n);
    char s[101];

    scanf("%s",s);

        for(int i=1;i<n;i++)
        {
                if(s[i]==s[i-1])
                {
                    count++;
                }
                else
                {
                    count=1;
                }

                if(max<=count)
                {
                    max = count;
                }
    }
    printf("%d",max);
}
