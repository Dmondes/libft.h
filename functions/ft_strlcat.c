#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	destlen;
	size_t	srclen;
	size_t	i;
    
   	i = 0;
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (size == 0 || size < (destlen + srclen))
		return (srclen + size);
	while ((src[i]) && (destlen + i < size - 1))
	{
		dest[destlen + i] = src[i]; // append src at the end of dest
		i ++;
	}
	dest[destlen + i] = '\0';
	return (destlen + srclen);
}
