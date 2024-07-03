#include <stdio.h>

/**
 * leet - Encodes a string into "1337".
 * @str: The string to be encoded.
 *
 * This function modifies the input string in place to replace certain
 * characters with their "1337" equivalents
 *
 * Return: Pointer to the modified string.
 */
char *leet(char *str)
{
	char *ptr = str;
	char *leet_map = "aAeEoOtTlL";
	char *leet_replace = "430771";
	int i;

	while (*ptr != '\0')
	{
		for (i = 0; leet_map[i] != '\0'; i++)
		{
			if (*ptr == leet_map[i])
			{
				*ptr = leet_replace[i];
				break;
			}
		}
		ptr++;
	}
	return (str);
}
