#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		char c;

		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}

		_putchar('\n');

		i++;
	}
}
