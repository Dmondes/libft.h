int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i ++;
	}
	return (1);
}
//  checks if current str[i] is a character that is not in the range of ASCII values 'A' and 'Z'
