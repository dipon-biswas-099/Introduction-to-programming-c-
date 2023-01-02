// run time e memori alocate kore array te inout neya ,,, malloc function use kore
#include<stdio.h>
int main(){

int n,i;
scanf("%d",&n);
int* ptr;
ptr = (int*) malloc(n*sizeof(int)); // run time e memori niye adress return kore

for(i =0; i<n; i++)
{
    scanf("%d",(ptr+i));
}

for(i=0;i<n;i++)
{
    printf("%d th position -> %d\n",i,*(ptr+i));
}


return 0;
}
