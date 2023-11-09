#include "libft.h"

char  *ft_strrchr(const char *s, int c)
{
	int	i;
	char	ch;

	i = ft_strlen(s); // get the length of string
	ch = c;
	if (ch == '\0') // check if ch is the null character
        	return ((char *)&s[i]); // return a pointer to the null-terminating character
	while (i >= 0)
	{
		if (s[i] == ch)
			return ((char *)&s[i]);
		i --;
	}
	return (NULL);
}
