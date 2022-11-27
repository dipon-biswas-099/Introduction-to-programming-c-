#include<stdio.h>
#include<string.h>

int main()
{
     char arr[100];
     scanf("%s",arr);

     int len = strlen(arr);
     for(int i=0; i<len; i++)
     {
         if(arr[i]>=65 && arr[i]<=90)
         {
              arr[i]=32+arr[i];
          }
        else{
            arr[i]=arr[i]-32;
        }
     }
     printf("%s",arr);


}
