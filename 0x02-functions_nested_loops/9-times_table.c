#include "holberton.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table, starting with 0
 */


void times_table(void)
{
    int i, j, result;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            result = i * j;

            /* Print the result with proper formatting */
            if (j == 0)
            {
                _putchar('0');
            }
            else
            {
                _putchar(',');
                _putchar(' ');

                /* Print tens digit if greater than 0 */
                if (result >= 10)
                    _putchar(result / 10 + '0');
                else
                    _putchar(' ');

                /* Print units digit */
                _putchar(result % 10 + '0');
            }
        }
        _putchar('\n');
    }
}
