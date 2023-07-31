#include "lists.h"

/**
 * pop_listint - deletes the head node and returns the head node's data
 * @head: head of list
 *
 * Return: n
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (!(*head))
		return (0);
	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}
