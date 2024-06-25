#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The starting natural number
 *
 * Description: Numbers are separated by a comma and space.
 * The first number printed is n, and the last number printed is 98.
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);

			if (i != 98)
				printf(", ");
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);

			if (i != 98)
				printf(", ");
		}
	}
	printf("\n");
}
