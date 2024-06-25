#include <stdio.h>
#include "holberton.h"

int main(void){
	char test_char1 = 'g';
	char test_char2 = 'G';
	char test_char3 = '1';
	
	if (_isalpha(test_char1))
	{
		printf("%c is an alphabetic character.\n", test_char1);
	}
	else
	{
		printf("%c is not an alphabetic character.\n", test_char1);
	}
	
	if (_isalpha(test_char2))
	{
		printf("%c is an alphabetic character.\n", test_char2);
	}
	else
	{
		printf("%c is not an alphabetic character.\n", test_char2);
	}
	
	if (_isalpha(test_char3))
	{
		printf("%c is an alphabetic character.\n", test_char3);
	}
	else
	{
		printf("%c is not an alphabetic character.\n", test_char3);
	}
	return (0);
}
