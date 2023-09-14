#include "lists.h"

/**
 * free_dlistint - frees a dlistint list
 * @head: head of linked list
 */
void free_dlistint(dlistint_t *head)
{
	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
