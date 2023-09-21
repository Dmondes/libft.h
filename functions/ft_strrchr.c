#include "libft.h"

char  *ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s); // get the length of string
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char*)(s + i));
		i--;
	}
	return (NULL);
}
