#include <stdio.h>

/**
 * main - This is the main function
 *
 * Return: 0 when successful
 */

int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, next_fib = 0;
	unsigned long sum_even = 0;

	while (fib1 <= 4000000)
	{
		if (fib1 % 2 == 0)
		{
			sum_even += fib1;
		}
		next_fib = fib1 + fib2;
		fib1 = fib2;
		fib2 = next_fib;
	}
	printf("%lu\n", sum_even);
	return (0);
}
