#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char number;
	char lower_char;

	number = '0';
	lower_char = 'a';

	while (number <= '9')
	{
		putchar(number);
		number++;
	}

	while (lower_char <= 'f')
	{
		putchar(lower_char);
		lower_char++;
	}

	putchar('\n');

	return (0);
}
