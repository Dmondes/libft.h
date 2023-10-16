#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	if (needle[i] == '\0')
		return ((char*)haystack); // &haystack[i]
	
	while (haystack[i] && i < n)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < n)
		{
			j ++;
			if (needle[j] == '\0')
				return ((char*)haystack + i); //&haystack[i]
		}
		i ++;
	}
	return (NULL);
}
