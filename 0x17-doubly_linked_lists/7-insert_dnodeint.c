#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of linked list
 * @idx: index of new node
 * @n: data of new node
 *
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *curr;
	unsigned int i = 1;

	if (idx == 0)
		return (add_dnodeint(h, n));
	curr = *h;
	while (curr)
	{
		if (i == idx)
		{
			if (curr->next == NULL)
				return (add_dnodeint_end(h, n));
			new = malloc(sizeof(dlistint_t));
			if (!new)
				return (NULL);
			new->n = n;
			new->next = curr->next;
			new->prev = curr;
			curr->next->prev = new;
			curr->next = new;

			break;
		}
		curr = curr->next;
		i++;
	}

	return (new);
}
