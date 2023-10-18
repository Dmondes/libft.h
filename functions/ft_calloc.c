#include "libft.h"
#include <stdlib.h>

void  *ft_calloc(size_t count, size_t size) // number of elements, size in bytes of each element
{
	void	*ptr;

	ptr = (void*)malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count);
	return (ptr);
}
