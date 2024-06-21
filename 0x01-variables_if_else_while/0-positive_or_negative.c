#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - This is the main function
 *
 * Return: 0 when successful
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	printf("The number %d ", n);
	
	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n == 0)
	{
		printf("is zero\n");
	}
	else
	{
		printf("is negative\n");
	}
	return (0);
}
