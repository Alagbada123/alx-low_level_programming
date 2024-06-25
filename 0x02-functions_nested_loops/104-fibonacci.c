#include <stdio.h>

/**
 * print_first_98_fibonacci - prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * The numbers should be separated by a comma and space.
 */

void print_first_98_fibonacci(void);

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	print_first_98_fibonacci();
	return (0);
}

void print_first_98_fibonacci(void)
{
	unsigned long high1 = 0, low1 = 1;
	unsigned long high2 = 0, low2 = 2;
	unsigned long temp_high, temp_low;
	int i;

	printf("%lu, %lu", low1, low2);
	for (i = 3; i <= 98; i++)
	{
		temp_low = low1 + low2;
		temp_high = high1 + high2;
		if (temp_low >= 1000000000)
		{
			temp_low -= 1000000000;
			temp_high += 1;
		}
		if (temp_high > 0)
		{
			printf(", %lu%09lu", temp_high, temp_low);
		}
		else
		{
			printf(", %lu", temp_low);
		}
		low1 = low2;
		high1 = high2;
		low2 = temp_low;
		high2 = temp_high;
	}
	printf("\n");
}
