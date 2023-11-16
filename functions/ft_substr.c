#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;

   	i = 0;
	if (!s)
		return (NULL);
	new_str = (char *)malloc(len + 1); //len + null-terminated
	if (!new_str)
		return (NULL);
	while (i < len && s[start + i]) 
	{
		new_str[i] = s[start + i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
