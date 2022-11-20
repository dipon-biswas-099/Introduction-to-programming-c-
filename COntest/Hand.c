#include <stdio.h>
int main() {

    long long int n, full = 0;

    scanf("%lld", &n);

    for (long long int i = 1; i <= n; i++)
    {

        full += (n - i);
    }
    printf("%lld", full);
    return 0;
}
