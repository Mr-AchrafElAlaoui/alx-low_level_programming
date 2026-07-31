#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: String
 * @c: Character
 *
 * Return: Pointer to the first occurrence of thr character c,
 * NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}

	if (c == '\0')
	{
		return(s);
	}

	return (0);
}
