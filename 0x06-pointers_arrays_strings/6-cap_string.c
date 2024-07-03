#include <stdio.h>
#include <ctype.h>

/**
 * capitalize_words - Capitalizes all words in a string.
 * @str: The string to be capitalized.
 *
 * This function modifies the input string in place to capitalize the first
 * character of each word. Words are separated by spaces, tabs, new lines,
 * commas, semicolons, periods, exclamation marks, question marks, quotes,
 * parentheses, braces, and brackets.
 */
void capitalize_words(char *str)
{
	int capitalize_next = 1;

	while (*str != '\0')
	{
		if (*str == ' ' || *str == '\t' || *str == '\n' ||
			*str == ',' || *str == ';' || *str == '.' ||
			*str == '!' || *str == '?' || *str == '"' ||
			*str == '(' || *str == ')' || *str == '{' ||
			*str == '}')
		{
			capitalize_next = 1;
		}
		else
		{
			if (capitalize_next && isalpha(*str))
			{
				*str = toupper(*str);
				capitalize_next = 0;
			}
			else
			{
				capitalize_next = 0;
			}
		}
		str++;
	}
}
