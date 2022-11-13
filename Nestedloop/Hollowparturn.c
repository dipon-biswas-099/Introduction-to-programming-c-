#include<stdio.h>
int main(){
    int N,M;

    scanf("%d%d",&N,&M);


    for(int i=0; i<=N; i++)
    {
        printf("#");
    } printf("\n");

    for(int i=1; i<=(N-1);i++)
    {

           printf("#");


        for(int j=1; j<=(N-1);j++)

        {

            printf(" ");

        }printf("$\n");

}



     for(int i=0; i<=N; i++)
    {
        printf("#");
    }


return 0;
}
