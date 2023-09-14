#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: head of a list
 * @n: data of new node
 * Return: address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *h = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (!h)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (h->next)
	{
		h = h->next;
	}
	h->next = new_node;
	new_node->prev = h;
	return (new_node);
}
