#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: The main string to search in
 * @needle: The substring to search for.
 *
 * Return: Pointer to the first occurence of needle in @haystack,
 * NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *ptrH;
	char *ptrN;

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		ptrH = haystack;
		ptrN = needle;

		while (*ptrN != '\0' && *ptrN == *ptrH )
		{
			ptrN++;
			ptrH++;
		}

		if (*ptrN == '\0')
		{
			return (haystack);
		}

		haystack++;
		
	}

	return (0);
}
