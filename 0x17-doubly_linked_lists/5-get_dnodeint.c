#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node of a dlistint_t linked list
 * @head: head of a dlistint_t linked list
 * @index: index of the nth node
 * Return: nth node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *h = head;
	unsigned int i = 0;

	while (h)
	{
		if (i == index)
			return (h);
		h = h->next;
		i++;
	}
	return (NULL);
}
