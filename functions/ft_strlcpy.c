#include "libft.h"

size_t  ft_strlcpy(char *dest, const char *src, size_t size) 
{
    size_t  i;
    
    i = 0;
    while (src[i])
    {
        if (i < (size - 1) && size != 0)
            dest[i] = src[i];
        i ++;
    }
    if (i < size)
            dest[i] = '\0';
    else if (size > 0)
            dest[size - 1] = '\0';
    return (i);
}

