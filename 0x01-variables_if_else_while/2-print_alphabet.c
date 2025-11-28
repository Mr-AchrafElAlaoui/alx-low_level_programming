#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lower_char;

	lower_char = 97;

	while (lower_char <= 122)
	{
		putchar(lower_char);
		lower_char++;
	}

	putchar('\n');

	return (0);
}
