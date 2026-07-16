#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: String to be capitalized
 *
 * Return: Pointer of char
 */
char *cap_string(char *str)
{
	char *ptr;
	int word;

	ptr = str;

	word = 1;

	while (*ptr != '\0')
	{
		if (
		   *ptr == ' ' || *ptr == '\n' || *ptr == '\t' ||
		   *ptr == ',' || *ptr == ';' || *ptr == '.' ||
		   *ptr == '!' || *ptr == '?' || *ptr == '"' ||
		   *ptr == '(' || *ptr == ')' || *ptr == '{' || *ptr == '}'
		   )
		{
			word = 1;
		}
		else
		{

			if (word == 1 && (*ptr >= 'a' && *ptr <= 'z'))
			{
				*ptr -= ('a' - 'A');
			}

			word = 0;
		}
		ptr++;
	}

	return (str);
}
