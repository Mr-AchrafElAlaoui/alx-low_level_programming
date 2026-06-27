#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned long int num;
	unsigned long int max;
	unsigned long int i;

	num = 612852475143;
	max = 0;

	while (num % 2 == 0)
	{
		max = 2;
		num = num / 2;

	}

	for (i = 3; i * i <= num; i += 2)
	{
		while (num % i == 0)
		{
			max = i;
			num = num / i;
			
		}
	}

	if (num > 2)
	{
		max = num;
	}

	printf("%lu\n", max);

	return (0);
}
