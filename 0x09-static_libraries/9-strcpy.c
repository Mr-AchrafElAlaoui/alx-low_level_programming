#include "main.h"

/**
 * _strcpy - Copies the string from src to dest
 * @src: The source string to be copied
 * @dest: The destination buffer where the string is copied
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
