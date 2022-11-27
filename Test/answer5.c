#include<stdio.h>

int add_three_nums(int a, int b, int c);

int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    printf("%d",add_three_nums(x,y,0));

    return 0;
}
int add_three_nums(int a, int b, int c)
{
	return a+b+c;
}

