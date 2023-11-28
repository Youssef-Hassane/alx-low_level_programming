#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * copy - copy files
 * @fd_from: first file discreptor
 * @fd_to: second file discreptor
 * @f_from: first file name
 * @f_to: second file name
 */
void copy(int fd_from, int fd_to, char *f_from, char *f_to)
{
	int printed, flag;
	char buff[1024];

	printed = read(fd_from, buff, 1024);
	if (printed == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", f_from);
		exit(98);
	}
	while (printed)
	{
		flag = write(fd_to, buff, printed);
		if (flag != printed)
		{
			dprintf(2, "Error: Can't write to %s\n", f_to);
			exit(99);
		}
		printed = read(fd_from, buff, 1024);
		if (printed == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", f_from);
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
	int fd_from, fd_to, flag = 0;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (fd_to == -1)
	{

		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	copy(fd_from, fd_to, argv[1], argv[2]);

	flag = close(fd_to);
	if (flag == -1)
	{
		dprintf(2, "Error: Can't close fd %d", fd_to);
		exit(100);
	}

	flag = close(fd_from);
	if (flag == -1)
	{
		dprintf(2, "Error: Can't close fd %d", fd_from);
		exit(100);
	}
	return (0);
}
