#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	ch;

	i = 0;
	ch = c; // convert c to ascii character
	while (s[i])
	{
		if (s[i] == ch)
			return (&s[i]);
		i++;
	}
	if (ch == '\0') // if the char we are searching for happens to be the null-terminating char
		return (&s[i]);//return ((char *)s + i);
	return (NULL);
}
