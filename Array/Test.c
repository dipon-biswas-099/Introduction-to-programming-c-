#include <stdio.h>

int main() {
    int N=15;
    int a[15];
    a[0] =1;

    for(int i=1;i<=N;i++)
    {
        a[i]=(a[i-1]*2);
        printf("%d ",a[i]);


    }


   return 0;
}
