#include <stdio.h>

/**
 * _strcat - Concatenates the src string to the dest string.
 * @dest: The destination string to which the src string will be appended.
 * @src: The source string that will be appended to the dest string.
 *
 * This function appends the src string to the dest string, overwriting
 * the terminating null byte (\0) at the end of dest, and then adds a
 * terminating null byte. The function returns a pointer to the resulting
 * string dest.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strcat(char *dest, const char *src)
{
	char *dest_end = dest;

	while (*dest_end != '\0')
	{
		dest_end++;
	}
	while (*src != '\0')
	{
		*dest_end = *src;
		dest_end++;
		src++;
	}
	*dest_end = '\0';
	return (dest);
}
