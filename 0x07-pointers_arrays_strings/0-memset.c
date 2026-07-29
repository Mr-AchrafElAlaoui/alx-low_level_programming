#include "main.h"

/**
 * _memeset - fills memory with a constant byte
 * @s: Memory area
 * @b: Constant byte
 * @n: Bytes of memory to fill
 *
 * Return: Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (0);
}
