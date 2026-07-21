#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: First operand string
 * @n2: Second operand string
 * @r: Buffer to strore the result
 * @size_r: Buffer size
 *
 * Return: Pointer to the result, or 0 if it doesn't fit
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, num1, num2, sum, carry;
	char tmp;

	carry = 0;
	i = j = k = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;

	i--;
	j--;

	while (i >= 0 || j >= 0 || carry > 0)
	{
		if ((size_r - 1) <= k)
			return (0);

		num1 = (i >= 0) ? (n1[i] - '0') : 0;
		num2 = (j >= 0) ? (n2[j] - '0') : 0;
		sum = num1 + num2 + carry;
		carry = sum / 10;
		r[k] = ((sum % 10) + '0');

		i--;
		j--;
		k++;
	}

	r[k] = '\0';

	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		tmp = r[i];
		r[i] = r[j];
		r[j] = tmp;
	}

	return (r);
}
