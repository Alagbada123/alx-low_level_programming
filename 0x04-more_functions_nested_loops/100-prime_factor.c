#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long number = 612852475143;
	long largest_factor = 0;
	long i;

	while (number % 2 == 0)
	{
		largest_factor = 2;
		number /= 2;
	}
	for (i = 3; i <= sqrt(number); i += 2)
	{
		while (number % i == 0)
		{
			largest_factor = i;
			number /= i;
		}
	}
	if (number > 2)
	{
		largest_factor = number;
	}
	printf("%ld\n", largest_factor);
	return (0);
}
