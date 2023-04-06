#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];
    int freq[256] = {0}; // array to keep track of frequency of characters
    int i, max_freq = -1, len;
    char max_char;

    printf("Enter a string : ");
    fgets(str, MAX_SIZE, stdin);

    len = strlen(str);

    // Find frequency of each character in the string
    for(i = 0; i < len; i++)
    {
        freq[str[i]]++;
    }

    // Find the character with maximum frequency
    for(i = 0; i < len; i++)
    {
        if(freq[str[i]] > max_freq)
        {
            max_freq = freq[str[i]];
            max_char = str[i];
        }
    }

    printf("Max repeated character in the string = %c\n", max_char);
    printf("It occurs %d times", max_freq);

    return 0;
}