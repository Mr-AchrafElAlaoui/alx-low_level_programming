#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The first printed number
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);

		(n < 98) ? n++ : n--;
	}

	printf("98\n");
}
