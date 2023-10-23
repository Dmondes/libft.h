#include <stdlib.h> 
#include "libft.h"

static int count_words(const char *s, char c) // static to restrict scope of function to file defined in
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (s[i]) 
    {
       
        while (s[i] == c)  // Skip leading delimiters
            i ++;
        if (s[i] && s[i] != c) // Check for the start of a word
        {
            count ++;
            while (s[i] && s[i] != c) // Skip the rest of the word
                i ++;
        }
    }
    return (count);
}

char **ft_split(char const *s, char c) 
{
    char **result;
    int num_words;
    int index;
    int i;
    int j;
    int start;
    unsigned int len;

    num_words = count_words(s, c);
    index = 0;
    i = 0;
    result = (char **)malloc(sizeof(char *) * (num_words + 1));
    if (!result)
        return (NULL);
    while (s[i] != '\0') 
    {
        if (s[i] != c) 
        {
            start = i; // Starting position of the word
            while (s[i] && s[i] != c) 
                i ++;
            len = i - start;
            result[index] = (char *)malloc(len + 1);
            if (!result[index])
            {
                j = 0; // Free previously allocated memory and return NULL
                while (j < index)
                 {
                    free(result[j]);
                    j ++;
                }
                free(result);
                return (NULL);
            }
            ft_strlcpy(result[index], s + start, len + 1);
            index ++;
        }
        i++;
    }
    result[index] = NULL; // mark the end of the array of pointers
    return (result);
}
