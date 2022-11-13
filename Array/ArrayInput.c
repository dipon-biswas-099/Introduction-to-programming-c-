#include<stdio.h>
int main(){

    int  arr[5];
    int i;
    for(i=0; i<5;i++)
    {
        scanf("%d",&arr[i]);

    }

    for(i=0; i<5;i++)
    {
        printf("%d-th position value = %d \n",i,arr[i]);
    }


return 0;
}
