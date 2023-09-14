#include "lists.h"

/**
 * dlistint_len - returns number of elements in a linked dlistint_t list
 * @h: pointer to list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp = h;

	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
