#include "main.h"

/**
 * _strncpy - Copies a string from src to dest
 * @dest: The destination buffer
 * @src: The source of string to be copied
 * @n: The number of bytes to copie
 *
 * Return: Pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr;

	ptr = dest;

	while (n > 0 && *src != '\0')
	{
		*ptr = *src;

		ptr++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*ptr = '\0';

		ptr++;
		n--;
	}

	return (dest);
}
