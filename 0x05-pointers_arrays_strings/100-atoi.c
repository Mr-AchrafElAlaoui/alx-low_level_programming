#include "main.h"

/**
 * _atoi - Convert a string to an integer
 * @s: The string to be converted
 *
 * Description: Takes into account all '-' and '+' signs befor the number.
 * Stops converting as soon as a non-digit character is encountered after
 * the number begin.
 * Return: The converted integer value. O if no numbers are found
 */
int _atoi(char *s)
{
	unsigned int num;
	int i;
	int sign;

	i = 0;
	num = 0;
	sign = 1;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}

		i++;
	}

	while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
	{
		num = (num * 10) + (s[i] - '0');

		i++;
	}

	return (num * sign);
}
