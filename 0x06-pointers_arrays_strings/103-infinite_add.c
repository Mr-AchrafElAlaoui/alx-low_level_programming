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
	int sum;
	int carry;
	char *ptr;
	char *ptr2;
	char *pn1;
	char *pn2;
	char tmp;

	pn1 = n1;
	pn2 = n2;	
	ptr = r;
	carry = 0;
	i = 0;
	j = 0;
	k = 0;

	while (*pn1 != '\0')
	{
		i++;
		pn1++;
	}

	while (*pn2 != '\0')
	{
		j++;
		pn2++;
	}

	if (i > size_r || j > size_r)
	{
		return (0);
	}

	i--;
	j--;
	
	while (i >= 0 && (size_r) > k)
	{
		if (j >= 0)
		{
			sum = (n1[i] - '0') + (n2[j]  - '0') + carry;
		}
		else
		{
			sum = (n1[i] - '0') + carry;
		}

		carry = sum / 10;
		*ptr = ((sum % 10) + '0');

		i--;
		j--;
		k++;
		ptr++;
	}

	while (j >= 0 && (size_r) > k)
	{
		sum = (n2[j] - '0') + carry;

		carry = sum / 10;

		*ptr = ((sum % 10) + '0');

		j--;
		k++;
		ptr++;
	}

	if(carry != 0  && (size_r) > k )
	{
		*ptr = (carry + '0');
		ptr++;
		k++;
	}

	*ptr = '\0';

	if ((size_r - 1) < k)
	{
		return (0);
	}

	ptr--;

	ptr2 = r;

	while (ptr2 < ptr)
	{
		tmp = *ptr2;
		*ptr2 = *ptr;
		*ptr = tmp;

		ptr2++;
		ptr--;
	}

	return (r);

}
