#include "main.h"

/**
 * _sqrt_recursion - sqaure root
 * @n: number
 * Return: returns natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion_helper(n, 0));
}

/**
 * _sqrt_recursion_helper - helper method to find square root
 * @n: number
 * @i: iterator
 * Return: square root
 */

int _sqrt_recursion_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_recursion_helper(n, i + 1));
}
