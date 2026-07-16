#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @str: String to be encoded
 *
 * Return: Pointer to char
 */
char *rot13(char *str)
{
	char *ptr;
	char *input;
	char *output;
	int i;

	input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";


	ptr = str;

	while (*ptr != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*ptr == input[i])
			{
				*ptr = output[i];

				break;
			}
		}

		ptr++;
	}

	return (str);
}
