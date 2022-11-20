#include <stdio.h>
#include <string.h>
int main()
{
    char str[40];
   // scanf ("%s", str);
        fgets(str,sizeof(str),stdin);


    printf ("%d", strlen(str));
    return 0;
}
