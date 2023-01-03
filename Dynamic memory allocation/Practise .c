
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,n;
    n=5;
    int* ptr;

    ptr = (int*) malloc(n*sizeof(int));

    printf("%p\n",ptr);
    if(ptr== NULL)
    {
       printf("Memory Allocation failed .");
    }
    else
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",(ptr+i));
        }
        for(i=0;i<n;i++)
        {
            printf("%d ",*(ptr+i));
        }
    }
    n=10;
    int* ptr2;
    ptr2= realloc(ptr,sizeof(int));
    printf("%p\n",ptr);
    if(ptr2== NULL)
    {
       printf("Memory Allocation failed .");
    }
    else
    {
        for(i=5;i<n;i++)
        {
            scanf("%d",(ptr2+i));
        }
         for(i=0;i<n;i++)
        {
            printf("%d ",*(ptr2+i));
        }
    }
    free(ptr2);



return 0;
}
