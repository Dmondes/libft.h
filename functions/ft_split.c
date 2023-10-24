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
    char **new_str;
    int num_words;
    int index;
    int i;
    int j;
    int start;
    unsigned int len;

    num_words = count_words(s, c);
    index = 0;
    i = 0;
    new_str = (char **)malloc(sizeof(char *) * (num_words + 1));
    if (!new_str)
        return (NULL);
    while (s[i]) 
    {
        if (s[i] != c) 
        {
            start = i; // Starting position of the word
            while (s[i] && s[i] != c) 
                i ++;
            len = i - start;
            new_str[index] = (char *)malloc(len + 1);
            if (!new_str[index])
            {
                j = 0; // Free previously allocated memory and return NULL
                while (j < index)
                 {
                    free(new_str[j]);
                    j ++;
                }
                free(new_str);
                return (NULL);
            }
            ft_strlcpy(new_str[index], s + start, len + 1);
            index ++;
        }
        i++;
    }
    new_str[index] = NULL; // mark the end of the array of pointers
    return (new_str);
}
