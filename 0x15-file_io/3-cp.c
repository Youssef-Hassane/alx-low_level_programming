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
 * By Youssef Hassane
 */
void closeFileDescriptor(int fileDescriptor)
{
	/* Close the file descriptor using the close system call */
	int result = close(fileDescriptor);

	/* Check if the file descriptor was closed successfully */
	if (result == -1)
	{
		/* Print an error message to standard error if closing fails */
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
 * By Youssef Hassane
 */
void fileCopy(
	int srcFileDescriptor,
	int destFileDescriptor,
	char *sourceFileName,
	char *destinationFileName)
{
	ssize_t bytesRead, writeFlag;
	char buffer[1024];

	/* Read data from the source file and write it to the destination file */
	bytesRead = read(srcFileDescriptor, buffer, 1024);

	/* Check if reading from the source file was successful */
	if (bytesRead == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", sourceFileName);
		exit(98);
	}

	/* Continue copying data until there is nothing left to read */
	while (bytesRead > 0)
	{
		/* Write data to the destination file */
		writeFlag = write(destFileDescriptor, buffer, bytesRead);

		/* Check if writing to the destination file was successful */
		if (writeFlag != bytesRead)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destinationFileName);
			exit(99);
		}

		/* Read the next chunk of data from the source file */
		bytesRead = read(srcFileDescriptor, buffer, 1024);

		/* Check if reading from the source file was successful */
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
	/* Check if the correct number of command-line arguments is provided */
	if (argumentCount != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/* Open the source file for reading */
	sourceFileDescriptor = open(argumentVector[1], O_RDONLY);
	/* Check if opening the source file was successful */
	if (sourceFileDescriptor == -1)
	{
		dprintf(
		    STDERR_FILENO, "Error: Can't read from file %s\n", argumentVector[1]);
		exit(98);
	}
	/* Open the destination file for writing, creating it if it doesn't exist */
	destinationFileDescriptor =
	    open(argumentVector[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	/* Check if opening the destination file was successful */
	if (destinationFileDescriptor == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argumentVector[2]);
		/* Close the source file descriptor before exiting */
		closeFileDescriptor(sourceFileDescriptor);
		exit(99);
	}
	/* Perform the file copy operation */
	fileCopy(sourceFileDescriptor,
		   destinationFileDescriptor,
		   argumentVector[1],
		   argumentVector[2]);
	/* Close both file descriptors after copying is complete */
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
	/* Call the entryPoint function and return its result */
	return (entryPoint(argc, argv));
}
