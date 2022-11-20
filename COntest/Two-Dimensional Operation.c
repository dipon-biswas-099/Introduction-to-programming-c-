#include<stdio.h>
int main()
{

    int i,j,N,M;

    scanf("%d%d",&N,&M);
    int arr[101][101];
    for( i=1; i<=N; i++)
    {
        for( j=1; j<=M; j++)
        {
            scanf("%d",&arr[i][j]);

        }

    }




    for( i=1; i<=N; i++)
    {
        for( j=1; j<=M; j++)

        {
            if(i== arr[i][j] && j== arr[i][j] )
            {
                arr[i][j]= arr[i][j]+3;
            }
            else if(i== arr[i][j])
            {
                arr[i][j] = arr[i][j]+2;
            }
            else if(j== arr[i][j])
            {
                arr[i][j] = arr[i][j]+1;
            }
            printf("%d ",arr[i][j]);
        }printf("\n");
    }

    return 0;
}
