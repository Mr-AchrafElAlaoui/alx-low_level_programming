#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int num1, num2, res;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			res = num1 * num2;

			if (num2 == 0)
			{
				_putchar(res + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				if (res < 10)
				{
					_putchar(' ');
					_putchar(res + '0');
				}
				else
				{
					_putchar((res / 10) + '0');
					_putchar((res % 10) + '0');
				}
			}

			_putchar('\n');
		}
	}
}
