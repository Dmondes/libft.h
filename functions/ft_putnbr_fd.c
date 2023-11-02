#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    char c;
    long    num;
    
    num = n;
    if (n == 0) // Base case, stop recursion
    {
        ft_putchar_fd('0', fd);
        return; 
    }
    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        num = -num; // Handle INT_MIN
    }
    ft_putnbr_fd(num / 10, fd); // Recursive call
    c = num % 10 + '0'; // Get the last digit and convert it to a character
    ft_putchar_fd(c, fd); // Print the character
}

