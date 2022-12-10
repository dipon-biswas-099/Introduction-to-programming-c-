#include<stdio.h>
#include<string.h>
char func( )
{
    char arr[100];
    char swap;
    scanf("%s",arr);
    int len = strlen(arr);
    for(int i=1; i<len; i++)
    {
        for(int i=0; i<len-1; i++)
        {
            if(arr[i]<arr[i+1])
            {
                 swap = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = swap;
            }
        }
    }
    printf("%s",arr);
}

int main()
{

   func();
}
