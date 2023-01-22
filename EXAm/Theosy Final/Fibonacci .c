#include <stdio.h>

int main()
{
    int n, a = 0, b = 1, c, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        if (i < 1)
        {
            printf("%d, ", i);
            continue;
        }
        c = a + b;
        printf("%d, ", c);
        b = a;
        a = c;
    }
    return 0;
}

