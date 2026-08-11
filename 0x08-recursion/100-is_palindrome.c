#include "main.h"
 
char *str_last_char(char *p)
{

	if (*(p + 1) == '\0')
		return (p);

	return (str_last_char(p + 1));
}

/**
 * palindrome_recursive - Two-pointer recursive checker
 * @s: Pointer to the left side (moving forward)
 * @p: POinter to the right side (moving backward)
 *
 * Return: 1 if palindrome, 0 if not
 */ 
int palindrome_recursive(char *s, char *p)
{
	if (s >= p)
		return (1);

	if (*s != *p)
		return (0);

	return (palindrome_recursive(s + 1, p - 1));
}


/**
 * is_palindrome - Checks if string is palindrome
 * @s: The string to check
 *
 * Return: 1 if a string is a palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	char *p;

	p = s;

	if (*s == '\0')
		return (1);

	p = str_last_char(p);
	
	return (palindrome_recursive(s, p));
}
