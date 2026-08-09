#include "main.h"

/**
 * sqrt_accumulator - A tail-recursive helper function to calculate square root
 * @a: The current number we are testing as the square root
 * @n: The target number we want to find the square root of
 *
 * Return: The natural square root,
 * otherwise -1 if n does note have a natural square root
 */
int sqrt_accumulator(int a, int n)
{
	if ((a * a) > n)
		return (-1);
	if ((a * a) == n)
		return (a);

	return (sqrt_accumulator(a + 1, n));

}
/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number to calculate the square root
 *
 * Return: The natural square root.
 */
int _sqrt_recursion(int n)
{
	return (sqrt_accumulator(0, n));
}
