#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    int i;

    if (!dest || !src)
        return (NULL); // check for null pointers, in case the function dereferences null pointers
    i = 0;
    if (dest > src) // <n, dest comes after src, might have overlap
    {
        i = n - 1;
        while (i >= 0 && i < n) // copies from the end
        {
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
            i--;
        }
    }
    else
    {
        while (i < n) // no overlap, copies from the start
        {
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
            i++;
        }
    }
    return (dest);
}
