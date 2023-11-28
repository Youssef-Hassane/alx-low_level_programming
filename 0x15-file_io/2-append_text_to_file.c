#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - Appends text to the end of a file
 * Return: 1 on success, -1 on failure
 * --------------------------
 * @filename: Name of the file.
 * @text_content: NULL-terminated string to add at the end of the file.
 * --------------------------
 * By Youssef Hassane
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int theFile;
	int writerTheResult;
	int closeTheResult;
	/* Check if filename is valid */
	if (filename == NULL)
		return (-1);
	/* Open the file for writing only, without truncating it */
	theFile = open(filename, O_WRONLY | O_APPEND);
	/* Check if theFile is valid */
	if (theFile == -1)
		return (-1);
	/* Check if text_content is not NULL and write to the file */
	if (text_content != NULL)
	{
		/* Write text_content to the file descriptor */
		writerTheResult = write(theFile, text_content, strlen(text_content));
		/* Check if write succeeded */
		if (writerTheResult == -1)
		{
			close(theFile);
			return (-1);
		}
	}
	/* Close the file descriptor */
	closeTheResult = close(theFile);
	/* Return 1 on success, -1 on failure */
	if (closeTheResult == -1)
		return (-1);
	/* Return 1 on success, -1 on failure */
	return (1);
}
