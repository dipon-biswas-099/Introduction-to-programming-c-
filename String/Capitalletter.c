#include<stdio.h>
int main(){

    char arr[100];
    fgets(arr,sizeof(arr),stdin);  // input

     for(int i=0; arr[i]!='\0';i++)
     {
         if(arr[i]>='a' && arr[i]<='z')
         {
             arr[i]-=32;
         }
     }
     puts(arr); // output

return 0;
}
