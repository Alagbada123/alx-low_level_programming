#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @a: pointer to the number to modify.
 * @N: index of the bit to set, starting from 0.
 *
 * Return: 1 if successful, or -1 if an error occurred.
 */
int set_bit(unsigned long int *a, unsigned int N)
{
	if (N >= (sizeof(unsigned long int) * 8))
		return (-1);

	*a |= (1 << N);
	return (1);
}
