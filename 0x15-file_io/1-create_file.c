#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - Creates a file with specified
 * permissions and writes content to it.
 * Return: 1 on success, -1 on failure.
 * --------------------------
 * @filename: Name of the file to create.
 * @text_content: NULL-terminated string to write to the file.
 * --------------------------
 * By Youssef Hassane
 */

int create_file(const char *filename, char *text_content)
{
	int theFile;
	int writerTheResult;
	int closeTheResult;
	/* Check if filename is valid */
	if (filename == NULL)
		return (-1);
	/* Open the file with read and write permissions */
	/* creating it if it doesn't exist */
	theFile = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	/* Check if theFile is valid */
	if (theFile == -1)
		return (-1);
	/* Write the content to the file if provided */
	if (text_content != NULL)
	{
		writerTheResult = write(theFile, text_content, strlen(text_content));
		/* Check if writerTheResult is valid */
		if (writerTheResult == -1)
		{
			close(theFile);
			return (-1);
		}
	}
	/* Close the file descriptor */
	closeTheResult = close(theFile);
	/* Check if closeTheResult is valid */
	if (closeTheResult == -1)
		return (-1);

	return (1);
}
