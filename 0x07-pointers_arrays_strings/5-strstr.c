#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: The main string to search in
 * @needle: The substring to search for.
 *
 * Return: Pointer to the first occurence of needle in @haystack,
 * NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i;

	if (*haystack == '\0')
	{
		return (0);
	}

	while (*needle != '\0')
	{
		for (i = 0; haystack[i] != '\0'; i++)
		{
			if (haystack[i] == *needle)
			{
				return (haystack + i);
			}
		}

		needle++;
	}

	return (0);
}
