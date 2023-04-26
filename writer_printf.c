#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * write_char - Funct that print the character.
 *
 * @c: the character.
 * @count: number of char.
 */

void	write_char(char c, int *count)
{
	*count += write(1, &c, 1);
}

/**
 * write_str - Funct prints struings.
 *
 * @str: string
 * @count: counter that count the numb of chars in string.
 */

void	write_str(char *str, int *count)
{
	int	i;

	i = 0;
	if (!str)
		write_str("(null)", count);
	else
	{
		while (str[i])
		{
			*count += write(1, &str[i], 1);
			i++;
		}
	}
}

/**
 * write_nbr - Funct that print the number
 *
 * @n: the number.
 * @count: number of number.
 */

void	write_nbr(int n, int *count)
{
	if (n >= 0 && n < 10)
		write_char((n + '0'), count);
	else if (n == -2147483648)
		*count += write(1, "-2147483648", 11);
	else if (n >= 10)
	{
		write_nbr((n / 10), count);
		write_nbr((n % 10), count);
	}
	else if (n < 0)
	{
		write_char(('-'), count);
		write_nbr((n * -1), count);
	}
}
