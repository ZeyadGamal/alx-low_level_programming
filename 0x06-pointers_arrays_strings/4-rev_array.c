#include "main.h"

/**
 * reverse_array - reverses content of an array
 * @a: array of integers
 * @n: number of elements of an array
 */

void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n; i++)
	{
		n--;
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
