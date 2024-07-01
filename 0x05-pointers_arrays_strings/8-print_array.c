#include <stdio.h>

/**
 * print_array - print first n elements of an integer array,followed by a new line.
 *
 * @param a Pointer to the integer array.
 * @param n Number of elements to print.
 */

void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
		return;
	}
	printf("%d", a[0]);
	for (i = 1; i < n; ++i)
	{
		printf(", %d", a[i]);
	}
	printf("\n");
}
