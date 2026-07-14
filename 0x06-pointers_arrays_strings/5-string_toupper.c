#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @str: String to be changed
 *
 * Return: Pointer to char
 */
char *string_toupper(char *str)
{
	char *ptr;
	
	ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr -= ('a' - 'A');
		}

		ptr++;
	}

	return (str);
}
