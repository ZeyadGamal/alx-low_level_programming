#include "lists.h"

/**
 * sum_dlistint - sum of all data of dlistint_t linked list
 * @head: head of a linked list
 * Return: sum of all data of the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *h = head;

	while (h)
	{
		sum += h->n;
		h = h->next;
	}

	return (sum);
}
