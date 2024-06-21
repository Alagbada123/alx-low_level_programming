#include <stdio.h>

/**
 * main - This is the main function
 *
 * Return: 0 when successful
 *
 */

int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
