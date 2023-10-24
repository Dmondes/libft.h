#include "libft.h"
#include <stdlib.h>

char *ft_itoa(int n)
 {
    int num;
    int negative;
    int count;
    int temp;
    int i;
    char *new_str;

    num = n;
    negative = 0;
    count = 0;
    if (n == 0)  // Handle the special case of 0
    {
        new_str = (char *)malloc(2); // malloc 2
        if (!new_str) 
        return (NULL);
        if (new_str)
        {
            new_str[0] = '0';
            new_str[1] = '\0';
        }
        return (new_str);
    }
    if (n < 0) // Handle negative numbers
    {
        num = -n;
        negative = 1;
        count++;
    }
    temp = num; // Count the number of digits in the number
    while (temp > 0) 
    {
        count++;
        temp /= 10;
    }
    new_str = (char *)malloc(count + 1); // +1 for the null-terminator
    if (!new_str) 
        return (NULL);
    i = count - 1; 
     while (i >= 0) // Fill the string in reverse order
     {
        new_str[i] = num % 10 + '0';
        num /= 10;
        i --;
    }
    if (negative) 
        new_str[0] = '-'; // minus sign if negative
    return (new_str);
}
