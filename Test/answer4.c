
#include<stdio.h>

int main()
{
    int i,j=0,n,k;
    scanf("%d%d",&n,&k);
    int arr[n];

    for( i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            arr[j]=i;
            printf("%d ",i);
            j++;
        }
    }
    for(i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            arr[j]=i;
            printf("%d ",i);
            j++;
        }
    }


    printf("\nThe %dth element in this sequence is %d. ",k, arr[k-1]);


    return 0;
}
