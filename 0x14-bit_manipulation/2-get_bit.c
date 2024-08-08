#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @a: number to extract the bit from.
 * @N: index of the bit to get, starting from 0.
 *
 * Return: the value of the bit at the specified index,
 *	or -1 if an error occurred.
 */
int get_bit(unsigned long int a, unsigned int N)
{
	if (N >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((a >> N) & 1);
}
