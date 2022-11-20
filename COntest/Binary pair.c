#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);


    for(int i=0; i<a; i++)
    {
        int n;
        int count=0;
        scanf("%d",&n);
        char arr[n];
        scanf("%s",arr);
        for(int j=0; j<n; j++)


        {
            if((arr[j]=='0' && arr[j+1]=='1') || (arr[j]=='1' && arr[j+1]== '0'))
            {
                count++;
            }

        }


        printf("%d\n",count);
    }

}
