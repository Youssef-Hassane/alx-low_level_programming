#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * check_and_cleanup - Checks the validity of filename
 * file descriptor, and buffer.
 * Closes the file descriptor and frees the buffer if any of them is invalid.
 * Return: 1 if everything is valid, 0 otherwise.
 * --------------------------
 * @filename: pointer to a string of 0 and 1 chars
 * @fd: file descriptor
 * @buffer: pointer to a buffer
 * --------------------------
 * By Youssef Hassane
 */
int check_and_cleanup(const char *filename, int fd, char *buffer)
{
	if (filename == NULL || fd == -1 || buffer == NULL)
	{
		if (fd != -1)
			close(fd);
		free(buffer);
		return (0);
	}

	return (1);
}

/**
 * read_and_write - Reads from the file descriptor and writes to STDOUT.
 * Frees the buffer and closes the file descriptor in case of an error.
 * Return: the total number of bytes read and written.
 * --------------------------
 * @fd: file descriptor
 * @buffer: pointer to a buffer
 * @letters: the number of letters to read and write
 * @total: pointer to the variable storing the total bytes read and written
 * --------------------------
 * By Youssef Hassane
 */
ssize_t read_and_write(int fd, char *buffer, size_t letters, ssize_t *total)
{
	ssize_t n;

	while ((n = read(fd, buffer, letters - *total))
			> 0 && *total < (ssize_t)letters)
	{
		if (write(STDOUT_FILENO, buffer, n) != n)
		{
			free(buffer);
			close(fd);
			return (0);
		}
		*total += n;
	}

	return (*total);
}

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
	int fd = open(filename, O_RDONLY);

	char *buffer = malloc(letters + 1);

	ssize_t total = 0;

	if (!check_and_cleanup(filename, fd, buffer))
		return (0);

	read_and_write(fd, buffer, letters, &total);

	free(buffer);
	close(fd);

	return (total);
}
