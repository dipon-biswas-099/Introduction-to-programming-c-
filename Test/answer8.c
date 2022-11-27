#include<stdio.h>
#include<string.h>

int main()
{
     char arr[100];
     int n;

     scanf("%s %d",&arr,&n);

     int len = strlen(arr);
     for(int i=0; i<len; i++)
     {
         if((arr[i]+=n)>122)
         {
             arr[i]-=26;
         }
     }
     printf("%s",arr);
}
