#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head of a list
 * @index: nth node
 *
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	while (temp && i <= index)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}

	return (NULL);
}
