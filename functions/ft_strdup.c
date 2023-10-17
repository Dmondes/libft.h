#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*point;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(src) + 1;
	point = (char *)malloc(sizeof(char) * len); // reserve the space required to store the string
	if (!point)
		return (0); // if malloc fails, return 0
	while (src[i])
	{
		point[i] = src[i];
		i ++;
	}
	point[i] = '\0'; // null-terminate the duplicate string
	return (point); // returns the pointer to the start of the duplicate
}
// strdup: returns a dynamically allocated copy of a string, useful to modify duplicate without affecting the original
