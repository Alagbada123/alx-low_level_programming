#include <stdio.h>

void print_fibonacci(void);

int main(void)
{
	print_fibonacci();
	return (0);
}

void print_fibonacci(void)
{
	unsigned long fib1_high = 0, fib1_low = 1;
	unsigned long fib2_high = 0, fib2_low = 2;
	unsigned long temp_high, temp_low;
	int i;

	printf("%lu, %lu", fib1_low, fib2_low);
	for (i = 3; i <= 98; i++)
	{
		temp_low = fib1_low + fib2_low;
		temp_high = fib1_high + fib2_high;
		if (temp_low >= 1000000000)
		{
			temp_low -= 1000000000;
			temp_high += 1;
		}
		printf(", %lu", temp_high > 0 ? temp_high * 1000000000 + temp_low : temp_low);
		fib1_low = fib2_low;
		fib1_high = fib2_high;
		fib2_low = temp_low;
		fib2_high = temp_high;
	}
	printf("\n");
}
