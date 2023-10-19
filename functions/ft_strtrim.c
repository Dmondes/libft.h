#include "libft.h"

char *ft_strtrim(char const *s1, char const *set) {
    if (s1 == NULL || set == NULL) {
        return (NULL);
    }
    size_t start;
    size_t end;
    size_t len;
    size_t i;
    size_t trimmed_len;
    char *trimmed;

    start = 0;
    end = 0;
    i = 0;

    len = ft_strlen(s1);
    while (start < len && ft_strchr(set, s1[start]) != NULL) // Find the no of characters to remove from the beginning
    {
        start++;
    }
    while (end < len && ft_strrchr(set, s1[len - end - 1]) != NULL) // Find the no of characters to remove from the end
    {
        end++;
    }
     trimmed_len = len - start - end; // len of the trimmed string
    trimmed = (char *)malloc(sizeof(char) * (trimmed_len + 1));
    if (!trimmed) 
        return (NULL); 
    while (i < trimmed_len)
    {
        trimmed[i] = s1[start + i];
        i ++;
    }
    trimmed[i] = '\0';
    return (trimmed);
}
