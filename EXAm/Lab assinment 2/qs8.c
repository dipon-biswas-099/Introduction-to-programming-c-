#include <stdio.h>
#include <string.h>

void func(char arr[])
{
    int len = strlen(arr);
    for (int i = 0; i < len; i++)
    {
        if ((i + 1) % 2 == 0)
        {

            printf("%c%c", arr[i], arr[i]);

        }
        else
        {
            printf("%c", arr[i]);
        }
    }
}


int main()
{
    char arr[20];
    scanf("%s", &arr);
    func(arr);
    return 0;
}
