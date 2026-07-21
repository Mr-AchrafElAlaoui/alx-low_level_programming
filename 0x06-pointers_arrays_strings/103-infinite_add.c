#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: First operand
 * @n2: Second operand
 *
 * Return: Pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	int j;
	int k;
	int num1;
	int num2;
	int sum;
	int carry;
	char tmp;

	carry = 0;
	i = 0;
	j = 0;
	k = 0;

	while (n1[i] != '\0')
	{
		i++;
	}

	while (n2[j] != '\0')
	{
		j++;
	}

	i--;
	j--;
	
	while (i >= 0 || j >= 0 || carry > 0)
	{
		if ((size_r - 1) <= k)
		{
			return (0);
		}

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
	k--;

	for (i = 0; i < k; k--)
	{
		tmp = r[i];
		r[i] = r[k];
		r[k] = tmp;

		i++;
	}

	return (r);

}
