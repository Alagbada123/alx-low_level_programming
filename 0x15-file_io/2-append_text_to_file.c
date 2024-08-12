#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - Appends a string at the end of a file.
 * @filename: Pointer to the name of the file.
 * @text_content: Pointer to the NULL-terminated string to add at end of file.
 *
 * Description: Opens the file specified by `filename` and appends the string
 * `text_content` to the end of the file. If `text_content` is NULL,
 * nothing is added to the file.
 * The function does not create the file if it does not exist.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0, n_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
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
