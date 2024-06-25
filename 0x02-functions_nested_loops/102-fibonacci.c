#include <stdio.h>

int main(void)
{
	int count;

	unsigned long fib1 = 1, fib2 = 2, next_fib;printf("%lu, %lu", fib1, fib2);
	
	for (count = 3; count <= 50; count++)
	{
		next_fib = fib1 + fib2;
		printf(", %lu", next_fib);
		fib1 = fib2;
		fib2 = next_fib;
	}
	printf("\n");
	return (0);
}
