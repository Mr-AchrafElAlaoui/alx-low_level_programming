#include "main.h"
#include <stdlib.h>

/**
 * strtow - Splits string into words.
 * @str: String to split.
 *
 * Return: Pointer to array of strings (words), NULL if fails
 */
char **strtow(char *str)
{
	char **words;
	int i, k;
       	int size, len;
	int word;

	if (str == NULL)
		return (NULL);
	
	i = 0;
	len = 0;
	size = 0;
	word = 0;

	while (str[i] != '\0')
	{
		while (str[i] != ' ' && str[i] != '\0')
		{
			word = 1;
			i++;
		}

		if (word == 1)
		{
			size++;
			word = 0;
		}
		
		if (str[i] != '\0')
			i++;
	}
	
	words = malloc(sizeof(char *) * (size + 1));

	if (words == NULL)
		return (NULL);
	k = 0;
	word = 0;

	for (i = 0; i < size; i++)
	{
		while ( str[k] != ' ' && str[k] != '\0')
		{
			word = 1;
			len++;
			k++;
		}

		if (word == 1)
		{
			words[i] = malloc(len + 1);
			word = 0;
			len = 0
		}
		if (words[i] == NULL)
			return (NULL);
		k++;
	}
	
	for (i = 0; i < size; i++)
	{
		k = 0;

		while (*str != ' ' && *str != '\0')
		{
			words[i][k] = *str;
			k++;
			str++;
		}

		words[i][k] = '\0';
		str++;
	}

	words[i] = NULL;

	return (words);
}
