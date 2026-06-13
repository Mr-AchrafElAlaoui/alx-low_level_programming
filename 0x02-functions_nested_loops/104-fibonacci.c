#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int first[2];
	unsigned long int second[2];
	unsigned long int next[2];
	unsigned long int base;
	unsigned int i, carry;

	base = 100000000000000000;
	first[0] = 1;
	first[1] = 0;
	second[0] = 2;
	second[1] = 0;
	next[0] = 0;
	next[1] = 1;

	printf("1, 2");

	for (i = 3; i <= 98; i++)
	{
		next[0] = first[0] + second[0];
		carry = next[0] / base;
		next[0] = next[0] % base;
		next[1] = first[1] + second[1] + carry;

		if (next[1] > 0)
		{
			printf(", %lu%09lu", next[1], next[0]);
		}
		else
		{
			printf(", %lu", next[0]);
		}

		first[0] = second[0];
		first[1] = second[1];
		second[0] = next[0];
		second[1] = next[1];
	}

	printf("\n");
	return (0);
}
