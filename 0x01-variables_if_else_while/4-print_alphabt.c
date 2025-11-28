#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower_char;

	lower_char = 'a';

	while (lower_char <= 'z')
	{
		if (lower_char != 'q' && lower_char != 'e')
			putchar(lower_char);

		lower_char++;
	}

	putchar('\n');

	return (0);
}
