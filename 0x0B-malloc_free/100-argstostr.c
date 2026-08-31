#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program.
 * @ac: Number of arguments
 * @av: Array containing the program command line arguments passed
 *
 * Return: Pointer to a new string, NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, k;
	char *str;
	int size;

	if (ac == 0 || av == NULL)
		return (NULL);

	k = 0;
	size = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size++;
		}

		size++;
	}

	str = malloc(sizeof(char) * (size + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}

		str[k] = '\n';
		k++;
	}

	str[k] = '\0';

	return (str);
}
