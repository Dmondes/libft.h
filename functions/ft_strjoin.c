#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *new_str; // pointer to store concatenated string
    size_t len1; // store length1
    size_t len2; // store length2

    if (!s1 || !s2) //verify s1, s2 are not null
        return (NULL);

    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);

    new_str = (char *)malloc((len1 + len2 + 1) * sizeof(char)); // length 1 & 2 + null-terminated

    if (!new_str) // if malloc fails
        return (NULL);

    ft_strlcpy(new_str, s1, len1 + 1); // copy s1 into new string
    ft_strlcat(new_str, s2, len1 + len2 + 1); // concat s2 into new string

    return (new_str);
}

