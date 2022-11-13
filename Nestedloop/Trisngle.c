#include<stdio.h>
int main(){



    for(int i=1; i<=10; i++)
    {
        printf("%d Line ",i);
        for(int j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }






return 0;
}

