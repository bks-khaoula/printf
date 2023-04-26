#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/*
 * write_char - Funct that print the character.
 *
 * @c: the character.
 * @count: number of char.
 */

void	write_char(char c, int *count)
{
	*count += write(1, &c, 1);
}

/*
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
