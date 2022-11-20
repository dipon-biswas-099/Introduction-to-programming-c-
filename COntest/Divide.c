#include <stdio.h>
int main() {

    int n, k;

    scanf("%d", &n);

    int arr[n], arr2[n];
    for (int i = 0; i < n; i++)
    {


        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    for (int i = 0; i < n; i++)
       {

        arr2[i] = arr[k + i];
       }
    for (int i = 0; i < k; i++)
    {


        arr2[(n - k) + i] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {


        printf("%d ", arr2[i]);
    }
    return 0;
}
