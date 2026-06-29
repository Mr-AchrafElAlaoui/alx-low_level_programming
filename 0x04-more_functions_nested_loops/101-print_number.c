#include "main.h"

/**
 * print_number - prints an integer
 * @n: The integer to print
 */
void print_number(int n)
{
	unsigned int num, i;

	i = 1;
	num = n;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}

	while (i <= (num / 10))
	{
		i *=10;
	}

	while (i >= 1)
	{
		_putchar((num / i) + '0');
		num = num % i;
		i /= 10;
	}

}
