#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    int arr1[n], arr2[n], diff[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    for (i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }
    // sort arr1 in ascending order
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (arr1[i] > arr1[j]) {
                int temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
        }
    }
    // sort arr2 in descending order
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (arr2[i] < arr2[j]) {
                int temp = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = temp;
            }
        }
    }
    // calculate the differences
    for (i = 0; i < n; i++) {
        diff[i] = arr1[i] - arr2[i];
    }
    // print the differences
    for (i = 0; i < n; i++) {
        printf("%d ", diff[i]);
    }
    printf("\n");
    return 0;
}
