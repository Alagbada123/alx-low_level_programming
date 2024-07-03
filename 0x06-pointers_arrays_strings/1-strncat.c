#include <stdio.h>

/**
 * _strncat - Concatenates at most n bytes from the src string dest string.
 * @dest: The destination string to which the src string will be appended.
 * @src: The source string that will be appended to the dest string.
 * @n: The maximum number of bytes to be appended from src.
 *
 * This function appends at most n bytes from the src string dest string,
 * overwriting the terminating null byte (\0) at the end of dest, adds a
 * terminating null byte. If src contains n or more bytes, it donot need be
 * null-terminated.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, const char *src, size_t n)
{
	char *dest_end = dest;
	size_t i;

	while (*dest_end != '\0')
	{
		dest_end++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest_end[i] = src[i];
	}
	dest_end[i] = '\0';
	return (dest);
}
