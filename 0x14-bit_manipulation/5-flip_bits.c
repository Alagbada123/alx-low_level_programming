#include "main.h"

/**
 * flip_bits - returns the number of bits needed to flip to get from one
 *             number to another.
 * @a: first number.
 * @b: second number.
 *
 * Return: number of bits to flip.
 *
 */
unsigned int flip_bits(unsigned long int a, unsigned long int b)
{
	unsigned long int xor = a ^ b;
	unsigned int counter = 0;

	while (xor)
	{
		counter += xor & 1;
		xor >>= 1;
	}
	return (counter);
}
