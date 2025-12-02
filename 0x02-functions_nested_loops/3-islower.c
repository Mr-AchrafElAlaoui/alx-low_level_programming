#include "main.c"

/**
 * _islower - checks for lowercase character
 * @c: The character to be checked
 *
 * Return: 1 if the character is lowercase, 0 otherise
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z') ? 1 : 0;
}
