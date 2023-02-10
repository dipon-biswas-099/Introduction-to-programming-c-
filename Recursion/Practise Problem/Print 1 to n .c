
#include<stdio.h>

void number(int i ,int n)
{
    if(i>n) return ;


        printf("%d ",i);
        number(i+1,n);

}
int main()
{
  int n;
  scanf("%d",&n);
   number(1,n);
 //


    return 0;
}
