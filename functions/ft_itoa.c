#include "libft.h"

char *case_zero()
{
    char *new_str;

    new_str = (char *)malloc(2); // malloc 2
    if (!new_str) 
        return (NULL);
    new_str[0] = '0';
    new_str[1] = '\0';
    return (new_str);
}

int count_digits(int n)
{
    int count;

    count = 0;
    while (n > 0) 
    {
        count++;
        n /= 10;
    }
    return (count);
}

void fill_str(int count, int n, char *new_str, int negative)
{
    count -= 1;
    while (count >= 0) // Fill the string in reverse order
    {
        new_str[count] = n % 10 + '0';
        n /= 10;
        count --;
    }
    if (negative) 
        new_str[0] = '-'; // minus sign if negative
}

char *ft_itoa(int n)
 {
    int negative;
    int count;
    char *new_str;

    negative = 0;
    count = 0;
    if (n == 0)  // Handle the special case of 0
    {
        new_str = case_zero();
        return (new_str);
    }
    if (n < 0) // Handle negative numbers
    {
        n = -n;
        negative = 1;
        count++;
    }
    count += count_digits(n);
    new_str = (char *)malloc(count + 1); // +1 for the null-terminator
    if (!new_str) 
        return (NULL);
    fill_str(count, n, new_str, negative);
    return (new_str);
}
