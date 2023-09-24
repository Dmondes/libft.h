#include "libft.h"

void	*ft_memset(void *block, int c, size_t size) //pointer to memory blk, assigned value in each btye of blk, limit of bytes
{
	size_t i;

	i = 0;
	while (i < size)
	{
		((unsigned char *)block)[i] = c; // assigned i-th byte to c, typecast pointer
		i++;
	}
	return (block); // return original pointer
}
