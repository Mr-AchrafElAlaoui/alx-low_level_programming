#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers followed by new line
 * @a: pointer of array of integers
 * @n: number of elements of array
 */
void print_array(int *a, int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < (n - 1); i++)
		{
			printf("%d, ", a[i]);
		}

		printf("%d\n", a[i]);
	}
}
