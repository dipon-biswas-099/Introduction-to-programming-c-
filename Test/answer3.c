#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100];
    int flag=0,flag2=0,flag3=0;
    scanf("%s",arr);
    int l = strlen(arr);
    for(int i=0; i<l; i++)
    {
        if(arr[i]=='1')
        {
            flag++;
        }
        else if(arr[i]=='9')
        {
            flag2++;
        }
        else if(arr[i]=='7')
        {
            flag3++;
        }
    }
    if(flag+flag2+flag3 >=3)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No");
    }
}
