#include<stdio.h>


void Main_arr(int *index, int n)
{
    int ctn = 0;
    int  count = 0;
    for (int i = 0; i < n; i++)
    {
        while (index[i] != 0)
        {
            int num = index[i] % 10;
            if (num == 7)
            {
                count++;
                break;
            }
            index[i] /= 10;
        }
    }
    if(n % 2 != 0)
    {
        n = n + 1;
    }
    if (count >= n / 2)
    {
        printf("Beautiful");
    }
    else
    {
        printf("Ugly");
    }
}



int main()
{
    int arr[100], n;
    int count = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    Main_arr(arr, n);
    return 0;
}
