#include "main.h"
#include <stdlib.h>

/**
 * _strdup - allocates space in memory, containing a copy of the string
 * @str: String to copy
 *
 * Return: Pointer to newly allocated space in memory, NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *copy;
	int size;
	int i;

	if (str == NULL )
		return (NULL);
	
	size = 0;
	
	while (str[size] != '\0')
	{
		size++;
	}
	
	copy = malloc(sizeof(*str) * (size + 1));

	if (copy == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		copy[i] = str[i];
	}

	copy[size] = '\0';

	return (copy);
}
