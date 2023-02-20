#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHARS 26

int main() {
    int n, i, count = 0;
    int freq[MAX_CHARS] = {0}; // initialize frequency array with all zeros
    char str[101];
    scanf("%d", &n);
    scanf("%s", str);
    // update the frequency array for each character in the string
    for (i = 0; i < n; i++) {
        freq[str[i] - 'a']++;
    }
    // count the unique characters
    for (i = 0; i < MAX_CHARS; i++) {
        if (freq[i] == 1) {
            count++;
        }
    }
    // print the count
    printf("%d\n", count);
    return 0;
}

