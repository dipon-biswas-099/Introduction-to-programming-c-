#include<stdio.h>
int main(){
int i,t,n;
int a[105];

scanf("%d",&t);

for(i=0;i<t;i++)
{
    scanf("%d",&n);
    for(int j=0;j<n;j++)
    {


    scanf("%d",a[i]);
    a[0]=0;
    if(a[i]>a[i])
    {
        printf("%d",a[i]);
    }
}}



return 0;
}
