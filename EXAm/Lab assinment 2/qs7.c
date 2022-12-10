#include<stdio.h>

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main()
{
    int n, ctn1, ctn2, count;
    int arr[100];
    int i,j;
    arr[0] = 0;
    scanf("%d", &n);

    for( i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &count);
    for ( i = 1; i <= count; i++)
    {
        scanf("%d", &ctn1);
        scanf("%d", &ctn2);
        swap(&arr[ctn1], &arr[ctn2]);
    }
    for ( i = 1; i <= n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}


