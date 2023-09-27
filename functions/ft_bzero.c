#include "libft.h"

void ft_bzero (void *block, size_t size)
{
    size_t i;

	i = 0;
	while (i < size)
	{
		((unsigned char *)block)[i] = '\0'; // set memory btyes to zero
		i++;
	}
}

/*void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}*/
