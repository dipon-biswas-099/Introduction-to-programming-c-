#include <stdio.h>


void Value(int num)
{
    num = num * num;
    printf(" by using value the number is : %d\n", num);
}

void Reference(int *num)
{
    *num = (*num) * (*num);
    printf("  by using Reference the num is : %d\n", *num);
}

int main()
{
    int num1 = 5;
    int num2 = 10;

    Value(num1);
    printf("Value of num1 after function call: %d\n", num1);

    Reference(&num2);
    printf("Value of num2 after function call: %d\n", num2);

    return 0;
}

