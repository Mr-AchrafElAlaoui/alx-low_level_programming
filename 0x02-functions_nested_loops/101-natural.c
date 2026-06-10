#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, sum;

	sum = 0;
	n = 0;

	while (n != 1024)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			sum = sum + n;
		}

		n++;
	}

	printf("%d\n", sum);

	return (0);
}
