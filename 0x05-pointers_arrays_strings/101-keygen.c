#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

void generatePassword(char *password, int length);

int main(void)
{
	char password[PASSWORD_LENGTH + 1];

	srand(time(NULL));
	generatePassword(password, PASSWORD_LENGTH);
	printf("Generated Password: %s\n", password);
	return (0);
}
