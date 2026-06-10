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

	for (i = 1; i <= 50; i++)
	{
		next = first + second;

		if (i != 50)
		{
			printf("%lu, ", next);
		}
		else
		{
			printf("%lu\n", next);
		}

		first = second;
		second = next;
	}

	return (0);
}
