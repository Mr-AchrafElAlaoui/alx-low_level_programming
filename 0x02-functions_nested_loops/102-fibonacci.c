#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int i;
	unsigned long first, second, next;

	first = 0;
	second = 1;
	next = 0;

	for (i = 1; i < 50; i++)
	{
		next = first + second;

		printf("%lu, ", next);

		first = second;
		second = next;
	}

	next = first + second;
	printf("%lu\n", next);

	return (0);
}
