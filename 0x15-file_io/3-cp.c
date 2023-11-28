#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * copy - copy files
 * @fd_from: first file descriptor
 * @fd_to: second file descriptor
 * @f_from: first file name
 * @f_to: second file name
 */
void copy(int fd_from, int fd_to, char *f_from, char *f_to)
{
	ssize_t printed, flag;
	char buffer[1024];

	printed = read(fd_from, buffer, 1024);
	if (printed == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f_from);
		exit(98);
	}

	while (printed > 0)
	{
		flag = write(fd_to, buffer, printed);
		if (flag != printed)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f_to);
			exit(99);
		}

		printed = read(fd_from, buffer, 1024);
		if (printed == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f_from);
			exit(98);
		}
	}
}

/**
 * main - copies from one file to another
 * @argc: num of arguments
 * @argv: value of arguments
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to;
	ssize_t printed, flag;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_from);
		exit(99);
	}

	copy(fd_from, fd_to, argv[1], argv[2]);

	flag = close(fd_from);
	if (flag == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	flag = close(fd_to);
	if (flag == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}
