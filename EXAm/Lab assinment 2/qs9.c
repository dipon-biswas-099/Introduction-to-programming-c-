#include <stdio.h>

int is_prime(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else
    {
        for(int i=2; i<=n/2; i++)
        {
            if(n%i == 0)
            {
                return 0;
            }
        }
        return 1;
    }
}
float is_even(int arr[], int n)
{
    int ctn = 0;
    int  count = 0;
    float avg;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            ctn += arr[i];
            count++;
        }
    }

    avg = ctn / count;
    return avg;
}




int main()
{
    int n, count = 0;

    scanf("%d", &n);
    int arr[n];


    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }


    for(int i = 0; i < n; i++)
    {
        int prime = is_prime(arr[i]);
        if(prime)
        {
            count++;
        }
    }


    float avr = is_even(arr, n);
    printf("Prime numbers: %d\n", count);
    printf("Average of all even integers: %.2f", avr);


    return 0;
}
