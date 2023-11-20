#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
        char    *new_str;
        size_t  i;
        size_t  s_len;

        i = 0;
        s_len = ft_strlen(s);
        if (start >= s_len || len == 0)
                return (ft_strdup(""));
        if (!s)
                return (NULL);
        if (start + len > s_len)
                len = s_len - start;
        new_str = (char *)malloc(sizeof(char) * (len + 1));
        if (!new_str)
                return (NULL);
        while (i < len && s[start + i])
        {
                new_str[i] = s[start + i];
                i ++;
        }
        new_str[i] = '\0';
        return (new_str);
}
