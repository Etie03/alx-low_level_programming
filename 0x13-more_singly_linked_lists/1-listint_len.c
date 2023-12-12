#include "lists.h"
#include <stdio.h>

/**
 * listint_len - a function that returns the number of
 * elements in a linked lists
 * @h: head of the linked list
 *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h != NULL)
	{
		while (h)
		{
		count++;
		h = h->next;
		}
	}

	return (count);
}
