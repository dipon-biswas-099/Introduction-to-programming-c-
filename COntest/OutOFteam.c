#include<stdio.h>
int main(){

    int arr[105];
    int N,K;
    scanf("%d",&N);
    scanf("%d",&K);
    int count=0;
    for(int i=1;i<=N;i++)
    {
        scanf("%d",&arr[i]);
    }
        for(int i=1; i<=N;i++)
        {
            if(K > arr[i])
            {
                count=count+1;

            }

        }

     printf("%d",count);

return 0;
}
