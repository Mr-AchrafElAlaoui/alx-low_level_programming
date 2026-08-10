#include "main.h"

/**
 * prime_number_accumulator - Tail-recursive helper to check for prime
 * @n: The number we are checking
 * @a: the current odd number we are testing as a divisor
 *
 * Description: Uses Tail Call Optimization. @a It steps by 2 (skipping evens)
 * and stops at the square root (a * a > n) to save CPU cycles.
 *
 * Return: 1 if prime, 0 if not.
 */ 
int prime_number_accumulator(int n, int a)
{
	if (n % a == 0)
		return (0);

	if (a * a > n)
		return (1);

	return (prime_number_accumulator(n, a + 2));

}
/**
 * is_prime_number - Check if the number is a prime number
 * @n: The number to check
 *
 * Return: 1 if the number is prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	if (n == 2 || n == 3)
		return (1);

	if (n % 2 == 0)
		return (0);

	return (prime_number_accumulator(n, 3));
}
