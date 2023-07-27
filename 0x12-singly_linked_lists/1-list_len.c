#include "lists.h"

/**
 * list_len - number of elements in a linked list
 * @h: head of linked list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
