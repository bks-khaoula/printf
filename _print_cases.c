#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _print_cases - all cases of printed characters.
 *
 * @format: the format of char.
 * @args: my argument.
 * @count: count the number of char.
 *
 * Return: number of char.
 */

void	_print_cases(const char format, va_list args, int *count)
{
	if (format == 'c')
		write_char((va_arg(args, int)), count);
	else if (format == 's')
		write_str((va_arg(args, char *)), count);
	else if (format == '%')
		write_char('%', count);
	else if (format == 'd' || format == 'i')
		write_nbr((va_arg(args, int)), count);
	else if (format == 'o')
		write_nbr_unsigned((va_arg(args, unsigned int)), count);
	else if (format == 'x')
		write_hexa((va_arg(args, unsigned long int)), 0, count);
	else if (format == 'X')
		write_hexa((va_arg(args, unsigned long int)), 32, count);
	else if (format == 'u')
		write_nbr_unsigned((va_arg(args, unsigned int)), count);
}
