#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @a: the number to be converted and printed.
 */
void print_binary(unsigned long int a)
{
	if (a > 1)
		print_binary(a >> 1);
	_putchar((a & 1) ? '1' : '0');
}
