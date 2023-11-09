#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int len;
    int i;
    char *new_str;
    char ch;

    if (s == NULL || f == NULL)
        return (NULL);
    len = ft_strlen(s);
    new_str = (char *)malloc(sizeof(char) * (len + 1));
    if (!new_str)
        return (NULL);
    i = 0;
    while (i < len)
    {
        ch = f(i, s[i]);
        new_str[i] = ch;
        i ++;
    }
    new_str[i] = '\0';
    return (new_str);
}
