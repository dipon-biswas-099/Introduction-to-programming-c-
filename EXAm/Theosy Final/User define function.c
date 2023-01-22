#include <stdio.h>
int addition(int num1, int num2)
{
    int sum;
    sum = num1+num2;
    return sum;
}

int main()
{
    int a, b;
    printf("Enter number 1: ");
    scanf("%d",&a);
    printf("Enter number 2: ");
    scanf("%d",&b);


    int res = addition(a, b);
    printf ("Output: %d", res);

    return 0;
}
