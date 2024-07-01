#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers,then a new line.
 *
 * @a: Pointer to the array of integers to be printed.
 * @n: Number of elements to print from the array.
 *
 * Description: Numbers are printed separated by comma and space.
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
