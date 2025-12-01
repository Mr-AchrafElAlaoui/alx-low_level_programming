#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	int count;

	count = 0;

	while (count < 10)
	{
		char lower_char;

		lower_char = 'a';

		while (lower_char <= 'z')
		{
			_putchar(lower_char);
			lower_char++;
		}

		_putchar('\n');

		count++;
	}
}
