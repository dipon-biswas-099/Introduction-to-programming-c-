#include <stdio.h>
int main()
 {

   int n;

   scanf("%d",&n);
   int arr[n];

       for(int i=0; i<n; i++)
       {
          scanf("%d",&arr[i]);
       }

   for(int i=0; i<n; i++)
   {
      int count=0;
          if(arr[i] == 0 || arr[i] == 1)
          {
              count++;
          }
      for(int j=2; j<(arr[i]-1); j++)
          {
              if(arr[i]%j==0)
              {
                  count++;
              }
          }
      if(count==0)
      {
          printf("Yes\n");
      }
          else
          {
             printf("No\n");
          }

   }
    return 0;
}
