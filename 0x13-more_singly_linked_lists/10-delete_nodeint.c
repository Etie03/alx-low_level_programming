#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer to the first element in the list
 * @index: index of node to be deleted
 *
 * Return: 1 success, -1 failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int g = 1;
	listint_t *temp, *del;

	temp = *head;
	if (temp == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (g != index)
	{
		if (temp == NULL || temp->next == NULL)
			return (-1);
		temp = temp->next;
		g++;
	}
	del = temp->next->next;
	free(temp->next);
	temp->next = del;
	return (1);
}
