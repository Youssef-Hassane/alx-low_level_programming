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
 * Return: 0 if the first num bytes of str1
 * and str2 are equal, otherwise non-zero
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
 * elfClass - print ELF class
 * @elfHeader: the ELF header
 *
 * Return: bit mode (32 or 64)
 */
size_t elfClass(const unsigned char *elfHeader)
{
	printf("  %-34s ", "Class:");

	if (elfHeader[EI_CLASS] == ELFCLASS64)
	{
		printf("ELF64\n");
		return (64);
	}
	if (elfHeader[EI_CLASS] == ELFCLASS32)
	{
		printf("ELF32\n");
		return (32);
	}
	printf("<unknown: %x>\n", elfHeader[EI_CLASS]);
	return (32);
}

/**
 * elfData - print ELF data
 * @elfHeader: the ELF header
 *
 * Return: 1 if big endian, otherwise 0
 */
int elfData(const unsigned char *elfHeader)
{
	printf("  %-34s ", "Data:");

	if (elfHeader[EI_DATA] == ELFDATA2MSB)
	{
		printf("2's complement, big endian\n");
		return (1);
	}
	if (elfHeader[EI_DATA] == ELFDATA2LSB)
	{
		printf("2's complement, little endian\n");
		return (0);
	}
	printf("Invalid data encoding\n");
	return (0);
}

/**
 * elfVersion - print ELF version
 * @elfHeader: the ELF header
 */
void elfVersion(const unsigned char *elfHeader)
{
	printf("  %-34s %u", "Version:", elfHeader[EI_VERSION]);

	if (elfHeader[EI_VERSION] == EV_CURRENT)
		printf(" (current)\n");
	else
		printf("\n");
}

/**
 * elfOsabi - print ELF OS/ABI
 * @elfHeader: the ELF header
 */
void elfOsabi(const unsigned char *elfHeader)
{
	const char *osTable[19] = {

	    "UNIX - System V",
	    "UNIX - HP-UX",
	    "UNIX - NetBSD",
	    "UNIX - GNU",
	    "<unknown: 4>",
	    "<unknown: 5>",
	    "UNIX - Solaris",
	    "UNIX - AIX",
	    "UNIX - IRIX",
	    "UNIX - FreeBSD",
	    "UNIX - Tru64",
	    "Novell - Modesto",
	    "UNIX - OpenBSD",
	    "VMS - OpenVMS",
	    "HP - Non-Stop Kernel",
	    "AROS",
	    "FenixOS",
	    "Nuxi CloudABI",
	    "Stratus Technologies OpenVOS"};

	printf("  %-34s ", "OS/ABI:");

	if (elfHeader[EI_OSABI] < 19)
		printf("%s\n", osTable[(unsigned int)elfHeader[EI_OSABI]]);

	else
		printf("<unknown: %x>\n", elfHeader[EI_OSABI]);
}

/**
 * elfAbiVersion - print ELF ABI version
 * @elfHeader: the ELF header
 */
void elfAbiVersion(const unsigned char *elfHeader)
{
	printf("  %-34s %u\n", "ABI Version:", elfHeader[EI_ABIVERSION]);
}

/**
 * elfType - print ELF type
 * @elfHeader: the ELF header
 * @isBigEndian: endianness (big endian if non-zero)
 */
void elfType(const unsigned char *elfHeader, int isBigEndian)
{
	char *typeTable[5] = {

	    "NONE (No file type)",
	    "REL (Relocatable file)",
	    "EXEC (Executable file)",
	    "DYN (Shared object file)",
	    "CORE (Core file)"};
	unsigned int type;

	printf("  %-34s ", "Type:");

	if (isBigEndian)
		type = 0x100 * elfHeader[16] + elfHeader[17];
	else
		type = 0x100 * elfHeader[17] + elfHeader[16];

	if (type < 5)
		printf("%s\n", typeTable[type]);
	else if (type >= ET_LOOS && type <= ET_HIOS)
		printf("OS Specific: (%4x)\n", type);
	else if (type >= ET_LOPROC && type <= ET_HIPROC)
		printf("Processor Specific: (%4x)\n", type);
	else
		printf("<unknown: %x>\n", type);
}

/**
 * elfEntry - print entry point address
 * @buffer: string containing the entry point address
 * @bitMode: bit mode (32 or 64)
 * @isBigEndian: endianness (big endian if non-zero)
 */
void elfEntry(const unsigned char *buffer, size_t bitMode, int isBigEndian)
{
	int addressSize = bitMode / 8;

	printf("  %-34s 0x", "Entry point address:");

	if (isBigEndian)
	{
		while (addressSize && !*(buffer))
			--addressSize, ++buffer;

		printf("%x", *buffer & 0xff);

		while (--addressSize > 0)
			printf("%02x", *(++buffer) & 0xff);
	}
	else
	{
		buffer += addressSize;

		while (addressSize && !*(--buffer))
			--addressSize;

		printf("%x", *buffer & 0xff);

		while (--addressSize > 0)
			printf("%02x", *(--buffer) & 0xff);
	}

	printf("\n");
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
