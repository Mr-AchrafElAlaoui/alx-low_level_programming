#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	unsigned int first;
	unsigned int second;
	unsigned int next;
	unsigned int sum;

	first = 0;
	second = 1;
	next = 0;
	sum = 0;

	while ((next = first + second) <= 4000000)
	{
		if (next % 2 == 0)
		{
			sum += next;
		}

		first = second;
		second = next;
	}

	printf("%u\n", sum);

	return (0);
}
