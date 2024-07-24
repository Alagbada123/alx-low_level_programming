#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
* op_add - returns the sum of a and b
* @a: values
* @b: values
*
* Return: the answer when true
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub -  returns the diff of a and b
* @a: values
* @b: values
*
* Return: the answer when true
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul -  returns the mul of a and b
* @a: values
* @b: values
*
* Return: the answer when true
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div -  returns the div of a and b
* @a: values
* @b: values
*
* Return: the answer when true
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
* op_mod -  returns the remainder of the division of a and b
* @a: values
* @b: values
*
* Return: the answer when true
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
