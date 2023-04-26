#include "main.h"

/**
 * _printf - Funct works as a predefined printf().
 *
 * @format: the format.
 * @...: A variable number of a format to be printed.
 *
 * Description: check all formats and print them
 * Return: return number of the format.
 */

int _printf(const char *format, ...)
{
	va_list	args;
	int i;
	int count;

	count = 0;
	i = 0;
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && char_check(format[i + 1]))
		{
			_print_cases(format[i + 1], args, &count);
			i += 2;
		}
		else
		{
			count += write(1, &format[i], 1);
			i++;
		}
	}
	va_end(args);
	return (count);
}
