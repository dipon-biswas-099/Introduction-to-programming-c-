#include<stdio.h>
int main()
{
  int a;
  scanf("%d",&a);
  int b =3;
  int ans;
  ans = a/b;
  if(a%3==0)
  {
  printf("%d",ans);
  }
  else
  {
      printf("-1");
  }
    return 0;

}
