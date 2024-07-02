#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

/**
 * generatePassword - Generates a random password of specified length.
 * @password: Pointer to the buffer where the password will be stored.
 * @length: Length of the password to generate.
 * Description: This function generates a random password consisting of
 *              uppercase letters, lowercase letters, and digits.
 */

void generatePassword(char *password, int length);

/**
 * main - Entry point of the program.
 * Description: This function initializes the random number generator,
 *              generates a random password, and prints it.
 * Return: Always 0.
 */

int main(void)
{
	char password[PASSWORD_LENGTH + 1];

	srand(time(NULL));
	generatePassword(password, PASSWORD_LENGTH);
	printf("Generated Password: %s\n", password);
	return (0);
}
void generatePassword(char *password, int length)
{
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int i;

	for (i = 0; i < length; ++i)
	{
		int index = rand() % (sizeof(charset) - 1);

		password[i] = charset[index];
	}
	password[length] = '\0';
}
