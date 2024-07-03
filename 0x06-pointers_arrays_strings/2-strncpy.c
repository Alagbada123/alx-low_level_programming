#include <stdio.h>

/**
 * _strncpy - Copies at most n bytes of the src string to dest.
 * @dest: The destination buffer to copy the string to.
 * @src: The source string to be copied.
 * @n: The maximum number of bytes to be copied from src.
 *
 * This function copies up to n characters from the string pointed-src-dest.
 * If the len of src is <  n, the remainder of dest be padded with null-bytes.
 * If the len of src is >= n, the string will not be null-terminated.
 *
 * Return: A pointer to the destination string dest.
 */
char *_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
