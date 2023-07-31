#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of the list
 * @head: head of list
 * @n: data of new node
 *
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp = (*head);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!(*head))
	{
		(*head) = new_node;
		return (new_node);
	}

	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new_node;

	return (new_node);
}
