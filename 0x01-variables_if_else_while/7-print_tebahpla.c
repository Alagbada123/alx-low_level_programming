#include <stdio.h>

/**
 * main - This is the main function
 *
 * Return: 0 when successful
 *
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
