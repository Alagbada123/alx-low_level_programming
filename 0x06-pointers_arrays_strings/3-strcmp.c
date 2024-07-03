#include <stdio.h>

/**
 * _strcmp - Compares two strings.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 *
 * This function compares the string pointed to by s1 to s2.
 * It returns an integer <, =, or > zero if s1 is found,
 * respectively, to be less than, to match, or be greater than s2.
 *
 * Return: An integer less than, equal to, or greater than zero.
 */
int _strcmp(const char *s1, const char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
