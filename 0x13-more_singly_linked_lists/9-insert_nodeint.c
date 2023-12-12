#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first node of the list
 * @idx: the position where the new node is inserted
 * @n: data of the new node
 *
 * Return: address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int g = 1;
	listint_t *new_node, *temp;

	temp = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node->next = temp;
		new_node->n = n;
		*head = new_node;
		return (new_node);
	}
	while (g != idx)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		g++;
	}
	 new_node->next = temp->next;
	 new_node->n = n;
	 temp->next = new_node;
	return (new_node);
}
