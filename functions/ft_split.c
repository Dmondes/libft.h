#include <stdlib.h> 
#include "libft.h"

static int	count_words(const char *s, char c)
{
	int count = 0;
	int in_word = 0;

	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
		{
			in_word = 0;
		}
		s++;
	}
	return (count);
}

static char	*word_dup(const char *s, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
	{
		word[i++] = s[start++];
	}
	word[i] = '\0';
	return (word);
}

char		**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	if (!s || !(split = malloc((count_words(s, c) + 1) * sizeof(char *))))
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (s[i])
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || s[i + 1] == '\0') && index >= 0)
		{
			split[j++] = word_dup(s, index, i + (s[i + 1] == '\0' ? 1 : 0));
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
