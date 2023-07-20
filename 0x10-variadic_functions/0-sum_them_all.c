#include "variadic_functions.h"

/**
 * sum_them_all - sums all parameters
 * @n: number of parameters
 * @...: variable parameters
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum = 0;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = n; i > 0; i--)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
