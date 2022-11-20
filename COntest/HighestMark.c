#include<stdio.h>
int main(){

    int n,max;
    scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }

    max = arr[0];
        for(int i=0;i<n;i++)
           {
             if( max<arr[i])
                {
                    max = arr[i];
                }
           }

    for(int i=0;i<n;i++)
      {
          int r = max-arr[i];
          printf("%d ",r);

      }
return 0;
}
