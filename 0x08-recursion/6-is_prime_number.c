#include "main.h"

/**
 * is_prime_number - checks if input integer is a prime number
 * @n: input integer
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_number_helper(n, n - 1));
}

/**
 * is_prime_number_helper - calculates if a number is prime recursively
 * @n: number
 * @i: iterator
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number_helper(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (is_prime_number_helper(n, i - 1));
}
