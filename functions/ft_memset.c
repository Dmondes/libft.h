#include "libft.h"

void	*ft_memset(void *block, int c, size_t size)
{
	size_t i;

	i = 0;
	while (i < size)
	{
		((unsigned char *)block)[i] = c;
		i++;
	}
	return (block);
}
