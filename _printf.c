#include "main.h"

/*
 * _printf - Funct works as a predefined printf().
 *
 * @form: the format.
 * @...: A variable number of a format to be printed.
 *
 * Description: check all formats and print them
 * Returns: return number of the format.
 */

int	_printf(const char *form, ...)
{
	va_list	args;
	int i;
	int count;

	count = 0;
	i = 0;
	va_start(args, form);
	while (form[i])
	{
		if (form[i] == '%' && char_check(form[i + 1]))
		{
			_print_cases(form[i + 1], args, &count);
			i += 2;
		}
		else
		{
			count += write(1, &form[i], 1);
			i++;
		}
	}
	va_end(args);
	return (count);
}
