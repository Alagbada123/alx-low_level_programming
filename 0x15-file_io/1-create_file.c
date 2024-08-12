#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - Creates a file and writes a string to it.
 * @filename: Pointer to the name of the file to create.
 * @text_content: Pointer to a NULL-terminated string to write to the file.
 *
 * Description: Creates or truncates the file specified by `filename` and
 * writes the string `text_content` to it. The file is created with permissions
 * rw-------. If `filename` is NULL, the function returns -1. If `text_content`
 * is NULL, the function creates an empty file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, n_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
		n_written = write(fd, text_content, len);
		if (n_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
