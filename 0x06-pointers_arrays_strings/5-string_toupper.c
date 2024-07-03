#include <stdio.h>

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: The string to be converted.
 *
 * Return: Pointer to the converted string.
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 'a' + 'A';
		}
		ptr++;
	}
	return (str);
}
