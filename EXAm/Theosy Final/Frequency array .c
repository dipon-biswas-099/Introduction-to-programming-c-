#include <stdio.h>
#include <string.h>

void sortByFrequency(char input_string[])
{
    int freq[26] = {0};
    int len = strlen(input_string);
    char sorted_string[len + 1];
    int k = 0;
    for (int i = 0; i < len; i++)
    {
        freq[input_string[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < freq[i]; j++)
        {
            sorted_string[k] = (char)(i + 'a');
            k++;
        }
    }
    sorted_string[k] = '\0';
    printf(" %s", sorted_string);
}

int main()
{
    char input_string[30] ;
    scanf("%s",input_string);
    sortByFrequency(input_string);
    return 0;
}

