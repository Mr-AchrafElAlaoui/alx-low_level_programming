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
	int i, j, k;
	int count_words;
	int len;
	
	if (str == NULL || *str == '\0')\
		return (NULL);
	
	i = 0;
	j = 0;
	count_words = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count_words++;

		i++;
	}

	words = malloc(sizeof(char *) * (count_words + 1));

	if (words == NULL)
		return (NULL);

	i = 0;

	while (str[i] != '\0' && j < count_words)
	{
		while(str[i] == ' ')
			i++;

		len = 0;

		while (str[i + len] != ' ' && str[i + len] != '\0')
			len++;

		words[j] = malloc(sizeof(char) *(len + 1));

		if (words[j] == NULL)
		{
			while(j > 0)
			{
				free(words[--j]);
			}

			free(words);

			return (NULL);
		}

		for (k = 0; k < len; k++)
		{
			words[j][k] = str[i];
			i++;
		}

		words[j][k] = '\0';
		j++;
	}

	words[j] = NULL;
	return (words);
}
