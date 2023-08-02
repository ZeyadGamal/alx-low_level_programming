#include "lists.h"

/**
 * print_listint_safe - prints a list
 * @head;
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	while (*head)
	{
		count++;
	
