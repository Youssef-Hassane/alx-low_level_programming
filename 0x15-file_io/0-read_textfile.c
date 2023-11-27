#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * check_and_cleanup - Checks the validity of filename,
 * file descriptor, and buffer. Closes the file descriptor
 * and frees the buffer if any of them is invalid.
 * Return: 1 if everything is valid, 0 otherwise.
 * --------------------------
 * @filename: pointer to a string of 0 and 1 chars
 * @theFile: file descriptor
 * @theBuffer: pointer to a buffer
 * --------------------------
 * By Youssef Hassane
 */
int check_and_cleanup(const char *filename, int theFile, char *theBuffer)
{
	/* Check if filename, theFile, or buffer is invalid */
	if (filename == NULL || theFile == -1 || theBuffer == NULL)
	{
		/* If file descriptor is valid, close it */
		if (theFile != -1)
		{
			close(theFile);
		}
		/* Free the buffer */
		free(theBuffer);
		/* Return 0 to indicate failure */
		return (0);
	}
	/* Everything is valid, return 1 */
	return (1);
}

/**
 * read_and_write - Reads from the file descriptor and writes to STDOUT.
 * Frees the buffer and closes the file descriptor in case of an error.
 * Return: the total number of bytes read and written.
 * --------------------------
 * @theFile: file descriptor
 * @theBuffer: pointer to a buffer
 * @letters: the number of letters to read and write
 * @total: pointer to the variable storing the total bytes read and written
 * --------------------------
 * By Youssef Hassane
 */
ssize_t read_and_write(
	int theFile, char *theBuffer, size_t letters, ssize_t *total)
{
	ssize_t n;
	/* Read from the file descriptor and write to STDOUT */
	while ((n = read(theFile, theBuffer, letters - *total)) > 0
		&& *total < (ssize_t)letters)
	{
		/* If write fails, free buffer, close theFile, and return 0 */
		if (write(STDOUT_FILENO, theBuffer, n) != n)
		{
			free(theBuffer);
			close(theFile);
			return (0);
		}
		/* Update the total bytes read and written */
		*total += n;
	}
	/* Return the total number of bytes read and written */
	return (*total);
}

/**
 * read_textfile - Reads a text file and
 * prints it to the POSIX standard output.
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
	/*  Open the file in read-only mode */
	int theFile = open(filename, O_RDONLY);
	/* Allocate memory for the buffer */
	char *theBuffer = malloc(letters + 1);
	/* Variable to store the total bytes read and written */
	ssize_t total = 0;
	/* Check if filename, file, or buffer is invalid */
	/* and perform cleanup if needed */
	if (!check_and_cleanup(filename, theFile, theBuffer))
		return (0);
	/* Read from the file and write to STDOUT */
	/* updating the total bytes read and written */
	read_and_write(theFile, theBuffer, letters, &total);
	/* Free the buffer and close the file descriptor */
	free(theBuffer);
	close(theFile);
	/* Return the total number of bytes read and written */
	return (total);
}
