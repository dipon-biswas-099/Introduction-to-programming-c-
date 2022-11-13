
#include<stdio.h>
int main(){

        int n ;

scanf("%d",&n);
printf("Number of chocklet I have = %d \n",n);

        int choc = n;
        int pac = n;


       // printf("Number of chocklet I have = %d",n);

        while(pac>=4)
        {
           choc = choc+(pac/4);
           pac =(pac/4) + (pac%4);
        }
            printf(" total chocklet i get by packet = %d",choc);



    return 0;
    }
