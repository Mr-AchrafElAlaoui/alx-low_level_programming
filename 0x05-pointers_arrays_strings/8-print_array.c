#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers followed by new line
 * @a: pointer of array of integers
 * @n: number of elements of array
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < (n - 1); i++)
		{
			printf("%d, ", a[i]);
		}

		printf("%d", a[i]);
	}

	printf("\n");
}
