#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

void print_error(int code, const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(code);
}

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		print_error(97, "Usage: %s file_from file_to\n", argv[0]);
	}

	int fd_from, fd_to;
	ssize_t read_bytes, write_bytes;
	char buffer[BUFFER_SIZE];

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		print_error(98, "Error: Can't read from file %s\n", argv[1]);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR
	| S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_to == -1)
	{
		print_error(99, "Error: Can't write to file %s\n", argv[2]);
	}

	while ((read_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_bytes = write(fd_to, buffer, read_bytes);
		if (write_bytes != read_bytes)
		{
			print_error(99, "Error: Can't write to file %s\n", argv[2]);
		}
	}

	if (read_bytes == -1)
	{
		print_error(98, "Error: Can't read from file %s\n", argv[1]);
	}

	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		print_error(100, "Error: Can't close fd %d\n", fd_from > fd_to ? fd_from : fd_to);
	}

	return 0;
}
