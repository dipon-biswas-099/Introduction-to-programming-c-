#include<stdio.h>
int main()
{

    int N=8;
    int ara[8]= {12,7,9,3,15,2,6,5};
    int sort_ara[N];

    for(int i=0; i<8; i++)
    {
        printf("%d ,",ara[i]);
    }
    printf("\n");

    int min = ara[0];  // 1st value  ta minimum dhore nilam
    int min_index =0;  // min er index
    for(int j=0; j<8; j++)
    {

        min = ara[0];
        min_index =0;
        for(int i=0; i<8; i++)
        {
            if(ara[i]<min)
            {
                min = ara[i];
                min_index = i;
            }
        }
        sort_ara[j] = min;
        ara[min_index] =9999;

        for(int i=0; i<8; i++)
        {
            printf("%d ,",ara[i]);
        }
        printf("\n ");
    }
     for(int i=0; i<8; i++)
        {
            printf("%d ,",sort_ara[i]);
        }
    return 0;
}
