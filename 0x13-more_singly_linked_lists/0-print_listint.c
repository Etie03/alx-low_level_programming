#include <stdio.h>
#include "lists.h"

/**
  * print_listint - a function that prints all the elements of a linked list
  * @h: head of the linked list
  *
  * Return: number of nodes of the linked list
  */

size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}

	return (node_count);
}
