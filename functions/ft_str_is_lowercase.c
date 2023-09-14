int	ft_str_is_lowercase(int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i ++;
	}
	return (1);
}
//  checks if current str[i] is a character that is not in the range of ASCII values 'a' and 'z'
