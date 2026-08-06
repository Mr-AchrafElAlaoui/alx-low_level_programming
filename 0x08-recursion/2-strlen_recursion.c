#include "main.h"

/**
 * _strlen_increment - Tail-recusive helper to calculate string length
 * @n: The accumulator tracking the current length (running total)
 * @s: The pointer to the current character in the string
 *
 * Description: Uses the accumulator pattern, By passing the math (n + 1)
 * directly into the next call, it allows the compiler to perform Tial Call
 * Optimization (TCO). This flatterns the stack and prevents Stack Overflows.
 *
 * Return: The total lengh of the string
 */
int _strlen_increment(int n, char *s)
{
	if (*s == '\0')
		return (n);

	return (_strlen_increment(n + 1, s + 1));
}

/**
 * _strlen_recursion - Caluculates the length of a string
 * @s: The string to calculate the length of
 *
 * Description: Acts as a clean wrapper function for the end user.
 * It jumpstarts the _strlen_increment helper function by passing
 * the initial accumulator value of 0.
 *
 * Return: The lenght of the string.
 */
int _strlen_recursion(char *s)
{
	return	(_strlen_increment(0, s));

}
