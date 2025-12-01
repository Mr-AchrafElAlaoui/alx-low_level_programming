#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase followed by new line
 */
void print_alphabet(void)
{
	char lower_char;

	lower_char = 'a';

	while (lower_char <= 'z')
	{
		_putchar(lower_char);
		lower_char++;
	}

	_putchar('\n');
}
