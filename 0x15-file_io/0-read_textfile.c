#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
* read_textfile - Write a function that reads a text
* file and prints it to the POSIX standard output
* Return: the actual number of letters it could read and print
* --------------------------
* Prototype: ssize_t read_textfile(const char *filename, size_t letters);
* if the file can not be opened or read, return 0
* if filename is NULL return 0
* if write fails or does not write the expected amount of bytes, return 0
* --------------------------
* @filename: pointer to a string of 0 and 1 chars
* @letters: the number of letters it should read and print
* --------------------------
* By Youssef Hassane
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;

	char *buffer = malloc(letters + 1);

	ssize_t total = 0, n;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	while ((n = read(fd, buffer, letters - total)) >
		     0 &&
		 total < (ssize_t)letters)
	{
		if (write(STDOUT_FILENO, buffer, n) != n)
		{
			free(buffer);
			close(fd);
			return (0);
		}
		total += n;
	}

	free(buffer);
	close(fd);

	return (total);
}
