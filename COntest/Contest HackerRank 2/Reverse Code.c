#include <stdio.h>

int main()
{
    int num, digit,i,t;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
    scanf("%d", &num);
    while (num > 0)
    {
        digit = num % 10;
        num /= 10;
        printf("%c", 'A' + digit - 1);

    }
printf("\n");
    }

    return 0;
}
