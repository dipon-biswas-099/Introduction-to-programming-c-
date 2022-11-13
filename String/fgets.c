#include<stdio.h>
int main(){

    char sen[100];
    int i,count =0;
    fgets(sen,sizeof(sen),stdin);

    while(sen[i]!='\0')
    {
        if(sen[i]=='a')
        {
            count++;
        }
       else if(sen[i]=='a')
        {
            count++;
        }
        else if(sen[i]=='e')
        {
            count++;
        }
       else if(sen[i]=='i')
        {
            count++;
        }
        else if(sen[i]=='o')
        {
            count++;
        }
        else if(sen[i]=='u')
        {
            count++;
        }

        i++;
    }
    printf("%d",count);




return 0;
}
