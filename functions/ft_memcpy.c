#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;

    i = 0; // Initialize the index variable
    if (!dest || !src)
        return (NULL); // Check for null pointers and return NULL if found
    while (i < n)
    {
        ((unsigned char *)dest)[i] = ((unsigned char *)src)[i]; // Copy one byte at a time
        i++;
    }
    return (dest); // Return a pointer to the destination
}
