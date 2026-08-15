#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The main string to check
 * @accept: The dictionary of accepted characters
 *
 * Return: Pointer to the byte in @s, NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	if (*accept == '\0')
	{
		return (0);
	}

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == *s)
			{
				return (s);
			}
		}

		s++;
	}

	return (0);
}
