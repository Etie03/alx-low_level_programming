#include "lists.h"

/**
 * sum_listint - a function returns the sum of all the data (n) of
 * a linked list.
 * @head: head of a linked list
 *
 * Return: sum of all the data (n)
 */
int sum_listint(listint_t *head)
{
	int sums;

	sums = 0;
	while (head != NULL)
	{
		sums += head->n;
		head = head->next;
	}

	return (sums);
}
