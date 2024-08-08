#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @a: pointer to the number to modify.
 * @N: index of the bit to clear, starting from 0.
 *
 * Return: 1 if successful, or -1 if an error occurred.
 *
 */
int clear_bit(unsigned long int *a, unsigned int N)
{
	if (N >= (sizeof(unsigned long int) * 8))
		return (-1);

	*a &= ~(1 << N);
	return (1);
}
