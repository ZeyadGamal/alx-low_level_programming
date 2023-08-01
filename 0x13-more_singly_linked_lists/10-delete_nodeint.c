#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index of a list
 * @head: head of a linkedlist
 * @index: index of node to be deleted
 *
 * Return: 1 if successful, -1 if failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *ptr = *head;
	unsigned int i = 0;

	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}

	if (ptr == NULL)
		return (-1);

	while (i < index - 1)
	{
		if (!ptr || !(ptr->next))
		{
			return (-1);
		}
		ptr = ptr->next;
		i++;
	}

	temp = ptr->next;
	ptr->next = temp->next;
	free(temp);

	return (1);
}
