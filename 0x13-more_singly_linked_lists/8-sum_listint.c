#include "lists.h"

/**
 * sum_listint - sums all data (n) of a list
 * @head: head of a list
 *
 * Return: sum of n
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
