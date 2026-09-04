#include "main.h"
#include <stdlib.h>

/**
 * count_words - counts words in a string
 * @s: The string to evaluate
 *
 * Return: The number of words
 */
int count_words(char *s)
{
	int count;
	int i;

	i = 0;
	count = 0;

	while (s[i] != '\0')
	{
		if (s[i] != ' ' && (s[i + 1] == ' ' || s[i + 1] == '\0'))
			count++;

		i++;
	}

	return (count);
}

/**
 * free_array - Free the array of strings (words)
 * @words: pointer to array of strings to free
 * @size: The number of words in array
 */
void free_array(char **words, int size)
{
	int i;

	for (i = 0; i < count; i++)
	{
		free(words[i]);
	}

	free(words);
}

/**
 * strtow - Splits string into words.
 * @str: String to split.
 *
 * Return: Pointer to array of strings (words), NULL if fails
 */
char **strtow(char *str)
{
	char **words;
	int i = 0, j = 0, k, words_count, len;

	if (str == NULL || *str == '\0')
		return (NULL);

	words_count = count_words(str);
	if (words_count == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (words_count + 1));
	if (words == NULL)
		return (NULL);

	while (str[i] != '\0' && j < words_count)
	{
		while (str[i] == ' ')
			i++;

		len = 0;
		while (str[i + len] != ' ' && str[i + len] != '\0')
			len++;

		words[j] = malloc(sizeof(char) * (len + 1));
		if (words[j] == NULL)
		{
			free_array(words, j);
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
