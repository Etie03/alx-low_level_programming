#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements
 * of a dlistint_t list
 * @h: head of the list
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		++len;
		h = h->next;
	}

	return (len);
}
