#include<stdio.h>

int prime(int x)
{
    for(int i=2; i<x; i++)
    {        if(x%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int a,i;
    scanf("%d",&a);
    i = prime(a);

    if(i==1)
    {
        printf(" the number %d is prime \n",a);
    }
    else
    {
        printf("the number %d is composite \n",a);
    }


    return 0;

}
