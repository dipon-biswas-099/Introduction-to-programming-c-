#include<stdio.h>
int main()
{
    int result[10][10], fst_arr[10][10],snd_arr[10][10],ans_arr[10][10];
    int r1,r2,c1,c2,i,j,sum=0;
    printf("Enter the rows and colum for first matrix :");
    scanf("%d %d",&r1,&c1);

    printf("Enter the rows and colum for second matrix :");
    scanf("%d %d",&r2,&c2);

    while(r1!=c2)
    {
        printf(" Error !! column of the first matrix not equal to row of second ");

        printf("Enter the rows and colum for first matrix :");
        scanf("%d %d",&r1,&c1);

        printf("Enter the rows and colum for second matrix :");
        scanf("%d %d",&r2,&c2);

    }
    // first matrix input
    printf("first matrix\n");
    for(int i=0; i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            printf("first[%d][%d] =",i,j);

            scanf("%d",&fst_arr[i][j]);
        }
    }

    // taking input second matrix.
     printf("second matrix\n");
     for(int i=0; i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("second [%d][%d] =",i,j);
            scanf("%d",&snd_arr[i][j]);
        }
    }

    // multiplying matrix .
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;i++)
        {
            for(int k=0;k<c1;k++)
            {
                sum = sum + fst_arr[i][k]*snd_arr[k][j];
            }
            result[i][j]=sum;
            sum = 0;
        }
    }

    printf("\n\n First Matrix\n");
    for(int i=0; i<r1;i++)
    {
        //printf("\t");
        for(int j=0;j<c1;j++)
        {

           printf("%d ",fst_arr[i][j]);
        }
            printf("\n");
    }


    printf("\n\n second Matrix\n");

    for(int i=0; i<r2;i++)
    {
       // printf("\t");
        for(int j=0;j<c2;j++)
        {
           printf("%d ",snd_arr[i][j]);
        }
            printf("\n");

    }

    printf("\n\n multiply Matrix\n");

    for(int i=0; i<r1;i++)
    {
       // printf("\t");
        for(int j=0;j<c2;j++)
        {
           printf("%d ",result[i][j]);
        }
            printf("\n");

    }

    return 0;

}
