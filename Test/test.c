#include<stdio.h>
int main()
{
    int arr[3][3], i, j;
    int trans_arr[3][3];
    printf("The 3*3 Matrix is = ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d", &arr[i][j]);
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            trans_arr[j][i] = arr[i][j];
    }
    printf("The Transpose Matrix is =\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            printf("%d  ",trans_arr[i][j]);
        printf("\n");
    }

    return 0;
}
