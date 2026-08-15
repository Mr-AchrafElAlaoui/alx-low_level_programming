#include "main.h"

/**
 * _strcat - Appends the src string to the dest string
 * @dest: The destination string
 * @src: The source string
 *
 * Return: The pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	char *ptr;

	ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != '\0')
	{
		*ptr = *src;

		src++;
		ptr++;
	}

	*ptr = '\0';

	return (dest);
}
