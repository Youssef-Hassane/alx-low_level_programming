#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
* closeFileDescriptor - Closes a file descriptor.
* Return: No return value.
* --------------------------
* @fileDescriptor: The file descriptor to be closed.
* --------------------------
* By Alex Johnson
*/
void closeFileDescriptor(int fileDescriptor)
{
	int result = close(fileDescriptor);

	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileDescriptor);
		exit(100);
	}
}

/**
* fileCopy - Copies the content of one file to another.
* Return: No return value.
* --------------------------
* @srcFileDescriptor: The file descriptor of the source file.
* @destFileDescriptor: The file descriptor of the destination file.
* @sourceFileName: The name of the source file.
* @destinationFileName: The name of the destination file.
* --------------------------
* By Alex Johnson
*/
void fileCopy(
	int srcFileDescriptor,
	int destFileDescriptor,
	char *sourceFileName,
	char *destinationFileName)
{
	ssize_t bytesRead, writeFlag;
	char buffer[1024];

	bytesRead = read(srcFileDescriptor, buffer, 1024);

	if (bytesRead == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", sourceFileName);
		exit(98);
	}

	while (bytesRead > 0)
	{
		writeFlag = write(destFileDescriptor, buffer, bytesRead);
		if (writeFlag != bytesRead)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destinationFileName);
			exit(99);
		}

		bytesRead = read(srcFileDescriptor, buffer, 1024);
		if (bytesRead == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", sourceFileName);
			exit(98);
		}
	}
}

/**
* entryPoint - Entry point of the program.
* Return: 0 on success, or an error code on failure.
* --------------------------
* @argumentCount: The number of command-line arguments.
* @argumentVector: An array of strings containing the command-line arguments.
* --------------------------
* By Youssef Hassane
*/
int entryPoint(int argumentCount, char **argumentVector)
{
	int sourceFileDescriptor, destinationFileDescriptor;

	if (argumentCount != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	sourceFileDescriptor = open(argumentVector[1], O_RDONLY);
	if (sourceFileDescriptor == -1)
	{
		dprintf(
			STDERR_FILENO, "Error: Can't read from file %s\n", argumentVector[1]);
		exit(98);
	}

	destinationFileDescriptor =
	open(argumentVector[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (destinationFileDescriptor == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argumentVector[2]);
		closeFileDescriptor(sourceFileDescriptor);
		exit(99);
	}

	fileCopy(sourceFileDescriptor,
	destinationFileDescriptor,
	argumentVector[1],
	argumentVector[2]);

	closeFileDescriptor(sourceFileDescriptor);
	closeFileDescriptor(destinationFileDescriptor);

	return (0);
}

/**
* main - Entry point of the program
* Return: 0 on success, or an error code on failure.
* --------------------------
* @argc: The number of command-line arguments.
* @argv: An array of strings containing the command-line arguments.
* --------------------------
* By Youssef Hassane
*/
int main(int argc, char **argv)
{
	return (entryPoint(argc, argv));
}
