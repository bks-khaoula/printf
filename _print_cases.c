#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _print_cases - all cases of printed characters.
 *
 * @form: the format of char.
 * @args: my argument.
 * @count: count the number of char.
 *
 * Return: number of char.
 */

void	_print_cases(const char form, va_list args, int *count)
{
	if (form == 'c')
		write_char((va_arg(args, int)), count);
	else if (form == 's')
		write_str((va_arg(args, char *)), count);
	else if (form == '%')
		write_char('%', count);
}
