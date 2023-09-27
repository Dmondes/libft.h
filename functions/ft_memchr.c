#include "libft.h"

void * ft_memchr(const void *block, int c, size_t size)
{
    size_t i;

    i = 0;
    while (i < size)
    {
        if (*(unsigned char*)(block + i) == (unsigned char)c) // ensure they are individual btyes
            return ((void*)(block+ i));
        i++;
    }
    return (NULL);
}
