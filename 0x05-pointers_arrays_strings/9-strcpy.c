#include <stdio.h>

/**
 * my_strcpy - Copies the string pointed to by src, including the
 *             terminating null byte (\0), to the buffer pointed to by dest.
 *
 * @dest: Pointer to the destination buffer.
 * @src:  Pointer to the source string.
 *
 * Return: Pointer to dest.
 */

char *my_strcpy(char *dest, const char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_start);
}
