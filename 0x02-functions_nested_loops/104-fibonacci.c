#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	double first;
	double second;
	double next;
	unsigned int i;

	first = 0;
	second = 1;

	for (i = 1; i < 98; i++)
	{
		next = first + second;

		printf("%.0f, ", next);

		first = second;
		second = next;
	}

	next = first + second;

	printf("%.0f\n", next);

	return (0);
}
