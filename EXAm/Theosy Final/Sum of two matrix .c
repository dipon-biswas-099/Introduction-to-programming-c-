#include <stdio.h>

int main()
{
    int n, m;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &n, &m);

    int mat1[n][m], mat2[n][m], sum[n][m];
    printf("Enter the elements of the first matrix: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf(" after adding the two matrices  the sum is : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}

