#include<stdio.h>
int main()
{

    int arr[100];
    int i,j,m,n;

    printf("Number of element = ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n; i++)
    {
        m = i;
        for(j=i+1; j<n; j++)
        {

            if(arr[j]<arr[m])
            {
                m=j;
            }
        }
        int count=arr[i];
        arr[i]=arr[m];
        arr[m]=count;
    }

    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n");
    for(i=0; i<n; i++)
    {
        if(n%2!=0)
        {
            printf("Median value is = %d ",arr[n/2]);
            break;
        }
        else if(n%2==0)
        {
            int r = arr[n/2] + arr[(n/2)-1];
            printf("Median value is = %d ",r);
            break;
        }
    }



    return 0;
}

