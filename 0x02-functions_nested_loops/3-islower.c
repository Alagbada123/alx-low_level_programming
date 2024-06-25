#include <stdio.h>
#include "holberton.h"

/**
 * _islower(int c) - Write a function that checks for lowercase character
 * main - This is the main function
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
