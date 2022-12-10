#include <stdio.h>
int main()
{
    int i, n;
    int Final_count = 0, count = 1;
    scanf("%d", &n);
    for ( i = 1; i <= n; i++)
    {
        Final_count = Final_count + (i*count);
        if (i % 3 == 0)
        {
            if (count == 1)
            {
                count = -1;
            }
            else if (count == -1)
                {
                     count = 1;
                }
        }
    }
    printf("%d \n", Final_count);
    return 0;
}
