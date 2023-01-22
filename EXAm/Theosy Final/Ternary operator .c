#include<stdio.h>
int main(){

    int n , m;
    printf("Enter two number ");
    scanf("%d %d",&n,&m);
    int max = n>m ?n:m;

    printf("the maximum number is %d",max);


return 0;

}
