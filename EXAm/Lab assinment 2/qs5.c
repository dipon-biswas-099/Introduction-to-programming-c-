#include<stdio.h>
int func(int arr[],int lng)
{
    int count  = 0;
    for(int i = 1; i <= lng; i++)
    {
        if(i % 2 == 0 && arr[i] % 2 ==0)
        {
            count = count + i + arr[i];
        }
        else if (i % 2 != 0 && arr[i] % 2 != 0)
        {
            count = count + i + arr[i];
        }
    }
    return count;
}
int main()
{
    int arr[100];
    int n;
    arr[0] = 0;
    scanf("%d",&n);

    for(int i = 1; i <= n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf(" %d\n",func(arr,n));
    return 0;
}

