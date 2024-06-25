#include "main.h"
#include <stdio.h>


/**
 * main - check the code.
 *
 * Return: Always 0
 */

int main(void)
{
        char test_char = 'g';

        if (_islower(test_char))
        {
                printf("%c is a lowercase letter.\n", test_char);
        }
        else
        {
                printf("%c is not a lowercase letter.\n", test_char);
        }
        return 0;
}
