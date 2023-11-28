#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
* error_exit - Display error message and exit with status code 98.
* @msg: Error message to display.
*/
void error_exit(char *msg)
{
	dprintf(2, "%s\n", msg);
	exit(98);
}

/**
* print_magic - Print the ELF magic number.
* @magic: Pointer to the ELF magic number.
*/
void print_magic(unsigned char *magic)
{
	printf("  Magic:   ");
	for (int i = 0; i < 16; ++i)

		printf("%02x%c", magic[i], i < 15 ? ' ' : '\n');
}

/**
* elf_header - Display information contained in the ELF header.
* @filename: Name of the ELF file.
*/
void elf_header(char *filename)
{
	int fd;

	unsigned char magic[16];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		error_exit("Error: Cannot open file");

	if (read(fd, magic, 16) != 16)
		error_exit("Error: Cannot read ELF magic");

	print_magic(magic);

	close(fd);
}

/**
* main - Entry point.
* @ac: Argument count.
* @av: Argument vector.
* Return: 0 on success, 98 on error.
*/
int main(int ac, char **av)
{
	if (ac != 2)
		error_exit("Usage: elf_header elf_filename");

	elf_header(av[1]);

	return (0);
}
