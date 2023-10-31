#include "libft.h"

static void copy_str(char *trim_str, char const *s1, size_t start, size_t trimmed_len)
{
    size_t i;

    i = 0;
    while (i < trimmed_len)
    {
        trim_str[i] = s1[start + i];
        i ++;
    }
    trim_str[i] = '\0';
}
char *ft_strtrim(char const *s1, char const *set) 
{
    size_t start;
    size_t len;
    size_t i;
    size_t trimmed_len;
    char *trim_str;

    start = 0;
    i = 0;
    if (s1 == NULL || set == NULL) 
        return (NULL);
    len = ft_strlen(s1);
    while (start < len && ft_strchr(set, s1[start]) != NULL) // Find the no of characters to remove from the beginning
        start ++;
    while (i < len && ft_strrchr(set, s1[len - i - 1]) != NULL) // Find the no of characters to remove from the end
        i ++;
    trimmed_len = len - start - i; // len of the trimmed string
    trim_str = (char *)malloc(sizeof(char) * (trimmed_len + 1));
    if (!trim_str) 
        return (NULL); 
    copy_str(trim_str, s1, start, trimmed_len); 
    return (trim_str);
}
