#include "main.h"

/**
 * reverse_array - Reverses the content of an arry of integer
 * @a: An array of integers
 * @n: The number of elements to swap
 */
void reverse_array(int *a, int n)
{
	int *end;
	int tmp;

	if (n <= 0)
	{
		return;
	}

	end = (a + (n - 1));

	while (a < end)
	{
		tmp = *a;
		*a = *end;
		*end = tmp;

		a++;
		end--;
	}
}
