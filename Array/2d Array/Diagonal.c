#include<stdio.h>
int main(){

    int row,col;
   // int arr[row][col];
    printf("enter the value of row and col  ");
    scanf("%d%d",&row,&col);
    int arr[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    if(row==col)
    {
        int ans=1;
         for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==j)
            {
                continue;
            }
            if(arr[i][j] !=0)
            {
                ans=0;


            }

        }

    }
    if(ans==1)
    {
        printf("diagonal/n");
    }
    else{
        printf("not diagonal");

    }
    }
    else
    {
        printf("wrong array");

    }



return 0;
}
