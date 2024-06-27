#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * followed by a new line
 */
void more_numbers(void)
{
	int i, j;
	char buffer[20];
	int k;

	for (i = 0; i < 10; i++)
	{
		k = 0;
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				buffer[k++] = (j / 10) + '0';
			}
			buffer[k++] = (j % 10) + '0';
		}
		buffer[k++] = '\n';
		buffer[k] = '\0';
		for (k = 0; buffer[k] != '\0'; k++)
		{
			_putchar(buffer[k]);
		}
	}
}
