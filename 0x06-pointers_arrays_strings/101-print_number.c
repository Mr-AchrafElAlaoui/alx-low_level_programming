#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
	unsigned int i;
	unsigned int num;

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

	while ( i <= (num  / 10))
	{
		i *= 10;
	}

	while (i >= 1)
	{
		_putchar((num / i) + '0');
		num = num % i;
		i /= 10;
	}


}
