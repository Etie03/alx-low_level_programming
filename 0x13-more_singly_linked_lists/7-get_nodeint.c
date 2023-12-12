#include "lists.h"

/**
 * get_nodeint_at_index - a function that return the nth node
 * @head: pointer of the linked list
 * @index: index of the node starting from 0
 *
 * Return: value of the index node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp = head;

	while (temp)
	{
		if (count == index)
		{
			return (temp);
		}
		temp = temp->next;
		count++;
	}
	return (NULL);
}
