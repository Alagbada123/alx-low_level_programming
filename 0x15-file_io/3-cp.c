#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void close_file(int fd);
void exit_error(char *msg, char *filename, int code);

/**
 * main - Copies the content of one file to another file.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Description: This program copies the content of `file_from` to `file_to`.
 * If the number of arguments is incorrect, the program exits with code 97.
 * If `file_from` cannot be read, it exits with code 98.
 * If `file_to` cannot be created or written to, it exits with code 99.
 * If a file descriptor cannot be closed, it exits with code 100.
 * The program reads from the source file in chunks of 1024 bytes to reduce
 * the number of system calls.
 *
 * Return: 0 on success. Exits with various codes on failure.
 */


int main(int argc, char *argv[])
{
	int fd_from, fd_to, r, w;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		exit_error("Error: Can't read from file", argv[1], 98);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		exit_error("Error: Can't write to", argv[2], 99);
	while ((r = read(fd_from, buffer, 1024)) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w == -1 || w != r)
			exit_error("Error: Can't write to", argv[2], 99);
	}
	if (r == -1)
		exit_error("Error: Can't read from file", argv[1], 98);
	close_file(fd_from);
	close_file(fd_to);
	return (0);
}

/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to close.
 *
 * Description: Attempts to close the file descriptor `fd`. If the close
 * operation fails, the program exits with code 100.
 *
 * Return: void
 */

void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * exit_error - Prints an error message to the standard error and exits.
 * @msg: The error message to print.
 * @filename: The name of the file related to the error.
 * @code: The exit code.
 *
 * Description: Prints `msg` followed by `filename` to the standard error
 * and then exits the program with the specified `code`.
 *
 * Return: void
 */

void exit_error(char *msg, char *filename, int code)
{
	dprintf(STDERR_FILENO, "%s %s\n", msg, filename);
	exit(code);
}
