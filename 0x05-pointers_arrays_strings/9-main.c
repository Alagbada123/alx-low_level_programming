#include <stdio.h>
#include "9-strcpy.h"

int main()
{
	char src[] = "Hello, world!";
	char dest[20];

	my_strcpy(dest, src);
	printf("Copied string: %s\n", dest);
	return (0);
}
