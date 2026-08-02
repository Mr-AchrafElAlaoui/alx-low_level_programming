#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matirx of integers
 * @a: The square matrix of integers.
 * @size: The size of the square matrix.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum_diag1;
	int sum_diag2;

	sum_diag1 = 0;
	sum_diag2 = 0;

	for (i = 0; i < size; i++)
	{
		sum_diag1 += a[(size * i) + i];
		sum_diag2 += a[(size * i) + (size - 1 - i)];
	}

	printf("%d, %d\n", sum_diag1, sum_diag2);
}
