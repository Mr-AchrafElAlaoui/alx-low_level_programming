#include "main.h"

/**
 * _strncat - appends the src string to dest string based on n bytes from src
 * @dest: The destination string
 * @src: The source string
 * @n: The number of bytes from src
 *
 * Return: The pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr;

	ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != '\0' &&  n > 0)
	{
		*ptr = *src;

		ptr++;
		src++;
		n--;

	}

	*ptr = '\0';

	return (dest);
}
