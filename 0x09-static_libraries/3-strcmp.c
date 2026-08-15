#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: Pointer to string
 * @s2: Pointer to string
 *
 * Return: The result of the comparison.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
