#include<stdio.h>
int main(){


        int N=3;
        int arr[N];


        int i;

        for(i=0;i<N; i++)
        {
            scanf("%d",&arr[i]);
        }
        int min =arr[0];

        for( i=0; i<N; i++)
        {
            if(arr[i]<min)
               {
                   min= arr[i];
               }

        }printf("minimum value is %d \n",min);

         int w = arr[0];

         for(i=0; i<N; i++)
            {

                if(w<arr[i] && w>min)
                {
                    w=min;

                }
            }
             printf("the scond minimum = %d ",w);


return 0;
}
