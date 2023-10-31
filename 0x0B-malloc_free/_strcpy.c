/**
 * _strcpy - Write a function that copies the string pointed
 * to by src, including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: The destination string to copy
 * @src: The source string to copy
 * Return: A pointer to the start of the destination string.
 * --------------------------
 * Write a function that prints half of a string,
 * followed by a new line.
 * --------------------------
 * By Youssef Hassane
 */

char *_strcpy(char *dest, char *src)
{
	/* Store the original destination address */
	char *original_dest = dest;
	/* Use a while loop to copy characters from src to  */
	/* dest until the null-terminating character is encountered. */
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	/* Add the null terminator to the destination string */
	*dest = '\0';
	/* Return a pointer to the start of the destination string */
	return (original_dest);
}
