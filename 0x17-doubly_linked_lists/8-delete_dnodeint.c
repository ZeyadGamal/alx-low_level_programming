#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given index of linked list
 * @head: head of a linked list
 * @index: index of a linked list
 *
 * Return: 1 if successful, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = *head;
	dlistint_t *temp;
	unsigned int i = 0;

	while (curr)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = curr->next;
				if (*head)
					(*head)->prev = NULL;
			}
			else
			{
				temp->next = curr->next;
				if (curr->next)
					curr->next->prev = temp;
			}

			free(curr);
			return (1);
		}
		temp = curr;
		curr = curr->next;
		i++;
	}
	return (-1);
}
