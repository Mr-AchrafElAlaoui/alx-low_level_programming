#include "main.h"

/**
 * tail_factorial - Tail-recursive helper to calculate factorial of number
 * @n: The number to multiply
 * @a: The running product of the factorial calculation.
 *
 * Return: The final factorial result
 */
int tail_factorial(int n, int a)
{
	if (n == 0)
		return (a);
	if (n < 0)
		return (-1);

	return (tail_factorial(n - 1, a * n));
}

/**
 * factorial - Calculate the factorial of a given number
 * @n: The number to calculate the factorial of
 *
 * Description: Acts as a clean wrapper function for the end user.
 * It jumpstarts the tail_factorial helper function by
 * passing the initial accumulator value of 1.
 *
 * Return: The factorial of the number
 */
int factorial(int n)
{
	return (tail_factorial(n, 1));
}
