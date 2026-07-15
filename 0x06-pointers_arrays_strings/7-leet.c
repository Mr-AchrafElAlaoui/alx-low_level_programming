#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: The string to be encoded
 *
 * Return: Pointer to char
 */
char *leet(char *str)
{
	char *ptr;
	char *alp;
	char *code;
	int i;

	alp = "aAeElLoOtT";
	code = "4433110077";

	ptr = str;

	while (*ptr != '\0')
	{
		for (i = 0; i < 10; i++)
		{
			if (*ptr == alp[i])
			{
				*ptr = code[i];

				break;
			}
		}

		ptr++;
	}

	return (str);
}
