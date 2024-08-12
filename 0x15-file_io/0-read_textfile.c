#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it-to the POSIX standard output
 * @filename: Pointer to the name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Description: Opens the file specified by `filename`, reads up to `letters`
 * characters from it, and prints them to the standard output. If the file
 * cannot be opened or read, if `filename` is NULL, or if `write` fails,
 * the function returns 0.
 *
 * Return: The actual number of letters read and printed. Returns 0 on failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	n_read = read(fd, buffer, letters);

	if (n_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	n_written = write(STDOUT_FILENO, buffer, n_read);
	free(buffer);
	close(fd);

	if (n_written == -1 || n_written != n_read)
		return (0);
	return (n_written);
}
