#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to string
 */
void rev_string(char *s)
{
	int i;
	int len;
	char tmp;

	len = 0;
	i = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len--;

	while (i < len)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len] = tmp;

		i++;
		len--;
	}

}
