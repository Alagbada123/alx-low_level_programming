#include <stdio.h>

/**
 * reverse_array - Reverses the content of an array of integers.
 * @array: The array of integers to be reversed.
 * @n: The number of elements in the array.
 *
 * This function reverses the content of the array in place.
 */
void reverse_array(int *array, int n)
{
	int temp;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		temp = array[i];
		array[i] = array[n - i - 1];
		array[n - i - 1] = temp;
	}
}
