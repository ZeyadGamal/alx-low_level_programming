#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: head of a list
 *
 * Return: pointer to head of new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous;
	listint_t *next;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}

	*head = previous;

	return (*head);
}
