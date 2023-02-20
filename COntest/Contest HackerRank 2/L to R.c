#include <stdio.h>

int main()
{
    // Declare the variables
    int a, b, t,i,ii, j, flag;
    scanf("%d",&t);
    for(ii=0;ii<t;ii++)
    {

    scanf("%d %d", &a, &b); // Take input


    // Print display message
   // printf("\nPrime numbers between %d and %d are: ", a, b);

    // Traverse each number in the interval
    // with the help of for loop
    for (i = a; i <= b; i++) {
        // Skip 0 and 1 as they are
        // neither prime nor composite
      /*  if (i == 1 || i == 0)
            continue;*/


        flag = 1;

        for (j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }


        if (flag == 1)
            printf("%d ", i);
    }
    printf("\n");
}

    return 0;
}
