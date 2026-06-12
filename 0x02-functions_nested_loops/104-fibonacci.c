#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long first;
	unsigned long second;
	unsigned long next;
	unsigned int i;

	first = 0;
	second = 1;

	for (i = 1; i < 98; i++)
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
