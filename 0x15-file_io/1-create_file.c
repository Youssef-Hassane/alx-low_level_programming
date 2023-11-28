#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - Creates a file with specified
 * permissions and writes content to it.
 * @filename: Name of the file to create.
 * @text_content: NULL-terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, write_result, close_result;

	if (filename == NULL)
		return (-1);

	/* Open the file with read and write permissions */
	/* creating it if it doesn't exist */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	/* Write the content to the file if provided */
	if (text_content != NULL)
	{
		write_result = write(fd, text_content, strlen(text_content));

		if (write_result == -1)
		{
			close(fd);
			return (-1);
		}
	}

	/* Close the file descriptor */
	close_result = close(fd);

	if (close_result == -1)
		return (-1);

	return (1);
}
