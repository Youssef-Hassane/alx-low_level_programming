#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * print_error - Print error message and exit with a specific code.
 * --------------------------
 * @code: Exit code.
 * @message: Error message format string.
 * @file_name: Name of the file related to the error.
 * @fd_value: File descriptor related to the error.
 * --------------------------
 * By Youssef Hassane
 */

void print_error(int code, const char *message, const char *file_name, int fd_value)
{
	dprintf(STDERR_FILENO, message, file_name, fd_value);
	exit(code);
}

/**
 * main - Copy contents from one file to another.
 * Return: 0 on success, non-zero on failure.
 * --------------------------
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 * --------------------------
 * By Youssef Hassane
 */

int main(int argc, char *argv[])
{
	const char *file_from, *file_to;
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		print_error(98, "Error: Can't read from file %s\n", file_from, fd_from);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		print_error(99, "Error: Can't write to file %s\n", file_to, fd_to);
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			print_error(99, "Error: Can't write to file %s\n", file_to, fd_to);
		}
	}

	if (bytes_read == -1)
	{
		print_error(98, "Error: Can't read from file %s\n", file_from, fd_from);
	}

	if (close(fd_from) == -1)
	{
		print_error(100, "Error: Can't close fd %d\n", file_from, fd_from);
	}

	if (close(fd_to) == -1)
	{
		print_error(100, "Error: Can't close fd %d\n", file_to, fd_to);
	}

	return 0;
}
