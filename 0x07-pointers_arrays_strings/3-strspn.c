#include "main.h"

/**
 * _strspn - gets the lengh of a prefix substring
 * @s: String
 * @accept: prefix substring
 *
 * Return: The number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int found;
	unsigned int count;

	count = 0;

	if (*accept == '\0')
	{
		return (0);
	}

	while (*s != '\0')
	{
		found = 0;

		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}

		if (found == 0)
		{
			return (count);
		}

		s++;
		count++;
	}

	return (0);
}
