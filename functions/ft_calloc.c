#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
        void    *ptr;
        size_t  total;

        total = count * size;
        ptr = (void *)malloc(total);
        if (!ptr)
                return (NULL);
        ft_memset(ptr, 0, total);
        return (ptr);
}
