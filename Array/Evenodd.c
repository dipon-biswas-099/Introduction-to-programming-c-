#include<stdio.h>
int main(){

    int N;
    int arr[100];
    int i ;

    scanf("%d",&N);

    for(i=0; i<N; i++)
    {
        scanf("%d",&arr[i]);
    }
    int even_counter =0 ;
      int   odd_counter =0;
    for(i=0; i<N; i++)
    {
        if(arr[i]%2==0)
        {
            even_counter++;
        }
        else
        {
            odd_counter++;
        }
    }
    printf("No. of even numbers %d\n",even_counter);
        printf("No. of odd numbers %d",odd_counter);



return 0;
}
