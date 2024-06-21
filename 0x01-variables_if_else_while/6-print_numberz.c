#include <stdio.h>

/**
 * main - This i sthe main function
 *
 * Return: 0 when successful
 *
 */

int main(void)
{
	int num;
	
	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');
	
	return (0);
}
