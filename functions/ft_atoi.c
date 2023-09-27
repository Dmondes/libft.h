#include "libft.h"

char	*checkspace(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32) // check for whitespace characters
		i ++; // iterate through and skip
	return (&(str[i])); // return pointer to the first non-whitespace character
}

int ft_atoi(const char *str)
{
	int	i; // for iteration
	int	negative; // check for negative num
	int	num; // store int value

	i = 0;
	negative = 0;
	num = 0;
	str = checkspace(str); // skip leading whitespaces
	while (str[i] == '+' || str[i] == '-')// skip +/- signs
	{
		if (str [i] == '-')
			negative ++; // track no of - signs
		i ++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0'); // coverts to int
		i ++;
	}
	if (negative % 2 == 1) // check if num is -ve base on odd/even no of  - signs
		num = -num;
	if (num)
		return (num);
	else
		return (0);
}
