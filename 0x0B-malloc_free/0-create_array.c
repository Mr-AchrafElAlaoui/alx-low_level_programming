#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function creates an array of chars,
 * and initializes it with a specific char.
 * @size: Size of array
 * @c: Specific char to initialize array
 *
 * Return: A pointer to the array, NULL if size 0.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(*ptr) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
