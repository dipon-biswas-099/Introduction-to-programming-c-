#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    if(n==1)
    {
        printf("%d", 1);

       return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        printf("%d", i);
    }

    printf("\n");

    for (int i = 2; i <= n - 1; i++)
    {
            printf("%d", i);
            for (int j = 2; j <= n - 1; j++)
            {
                printf(" ");
            }
            printf("%d\n", n);
    }
    for (int i = 1; i <= n; i++)
        {
            printf("%d", n);
        }
    return 0;
}
