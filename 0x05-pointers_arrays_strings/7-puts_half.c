#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: pointer to string
 */
void puts_half(char *str)
{
	unsigned int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (len + 1) / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
