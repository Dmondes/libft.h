#include "libft.h"
#include <stdlib.h>

char *ft_itoa(int n)
{
    if (n == 0)  // Handle the special case of 0
    {
        char *result = (char *)malloc(2);
        if (result)
        {
            result[0] = '0';
            result[1] = '\0';
        }
        return (result);
    }
    int is_negative = (n < 0) ? 1 : 0; // Determine the sign of the number
    int num = (is_negative) ? -n : n; // Calculate the number of digits
    int num_digits = 0;
    while (num > 0)
    {
        num /= 10;
        num_digits++;
    }
    char *result = (char *)malloc(num_digits + is_negative + 1); // Allocate memory for the result string
    if (result == NULL)
        return (NULL);    
    num = (is_negative) ? -n : n; // Convert the number to a string in reverse order
    int index = 0;
    while (num > 0)
    {
        result[index++] = (num % 10) + '0';
        num /= 10;
    }    
    if (is_negative) // Add the negative sign if the number is negative
        result[index++] = '-';
    result[index] = '\0'; // Add the null-terminator and reverse the string
    int start = 0;
    int end = index - 1;
    while (start < end)
    {
        char temp = result[start];
        result[start] = result[end];
        result[end] = temp;
        start++;
        end--;
    }
    return (result);
}
