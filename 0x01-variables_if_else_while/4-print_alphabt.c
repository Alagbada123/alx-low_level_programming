#include <stdio.h>

/**
 * main - This is the main function
 *
 * Return: 0 when succesful
 *
 */
#include <stdio.h>

int main(void)
{
	char c;
	
	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
