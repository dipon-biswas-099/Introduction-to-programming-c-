#include<stdio.h>
#include<math.h>
int main(){

    int N=15;
    int arr[N];
    int j,i;
    j=0;


    for(i=1;j<N;i=pow(2,j))
    {
        arr[j] = i;
        printf("%d ",arr[j]);
        j++;
    }


return 0;
}
