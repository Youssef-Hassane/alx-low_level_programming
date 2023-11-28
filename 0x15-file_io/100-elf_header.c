#include <elf.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * customStrncmp - compare two strings
 * @str1: the first string
 * @str2: the second string
 * @num: the max number of bytes to compare
 *
 * Return: 0 if the first num bytes of
 * str1 and str2 are equal, otherwise non-zero
 */
int customStrncmp(const char *str1, const char *str2, size_t num)
{
	for (; num && *str1 && *str2; --num, ++str1, ++str2)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
	}
	if (num)
	{
		if (*str1)
			return (1);
		if (*str2)
			return (-1);
	}
	return (0);
}

/**
 * customClose - close a file descriptor and
 * print an error message upon failure
 * @fileDescriptor: the file descriptor to close
 */
void customClose(int fileDescriptor)
{
	if (close(fileDescriptor) != -1)
		return;
	write(STDERR_FILENO, "Error: Can't close fd\n", 22);
	exit(98);
}

/**
 * customRead - read from a file and print an error message upon failure
 * @fileDescriptor: the file descriptor to read from
 * @buffer: the buffer to write to
 * @count: the number of bytes to read
 */
void customRead(int fileDescriptor, char *buffer, size_t count)
{
	if (read(fileDescriptor, buffer, count) != -1)
		return;
	write(STDERR_FILENO, "Error: Can't read from file\n", 28);
	customClose(fileDescriptor);
	exit(98);
}

/**
 * printElfMagic - print ELF magic
 * @elfHeader: the ELF header
 */
void printElfMagic(const unsigned char *elfHeader)
{
	unsigned int i;

	if (customStrncmp((const char *)elfHeader, ELFMAG, 4))
	{
		write(STDERR_FILENO, "Error: Not an ELF file\n", 23);
		exit(98);
	}

	printf("ELF Header:\n  Magic:   ");

	for (i = 0; i < 16; ++i)
		printf("%02x%c", elfHeader[i], i < 15 ? ' ' : '\n');
}

/**
 * main - analyze an ELF file header
 * @argc: the argument count
 * @argv: the argument values
 *
 * Return: Always 0
 */
int main(int argc, const char *argv[])
{
	unsigned char headerBuffer[18];

	unsigned int bitMode;

	int isBigEndian;

	int fileDescriptor;

	if (argc != 2)
	{
		write(STDERR_FILENO, "Usage: elf_header elf_filename\n", 31);
		exit(98);
	}

	fileDescriptor = open(argv[1], O_RDONLY);
	if (fileDescriptor == -1)
	{
		write(STDERR_FILENO, "Error: Can't read from file\n", 28);
		exit(98);
	}

	customRead(fileDescriptor, (char *)headerBuffer, 18);

	printElfMagic(headerBuffer);
	bitMode = elfClass(headerBuffer);
	isBigEndian = elfData(headerBuffer);
	elfVersion(headerBuffer);
	elfOsabi(headerBuffer);
	elfAbiVersion(headerBuffer);
	elfType(headerBuffer, isBigEndian);

	lseek(fileDescriptor, 24, SEEK_SET);
	customRead(fileDescriptor, (char *)headerBuffer, bitMode / 8);

	elfEntry(headerBuffer, bitMode, isBigEndian);

	customClose(fileDescriptor);

	return (0);
}
