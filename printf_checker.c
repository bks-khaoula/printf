#include "main.h"

/**
 * char_check - Function that checks the character one after another.
 *
 * @c: variable character.
 *
 * Return: 1 if the character matched otherwise 0.
 */

int char_check(char const c)
{
	char *str;

	str = "csid%";
	while (*str)
	{
		if (c == *str)
			return (1);
		str++;
	}

	return (0);
}
