#include <stdio.h>

/**
 * main - This is the main function
 * brief Entry point of the program.
 *
 * This function prints the name of the file it was compiled from,
 * followed by a new line.
 *
 *  Return: 0 upon successful completion.
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
