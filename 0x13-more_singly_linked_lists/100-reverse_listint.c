#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev_temp = NULL;
listint_t *next_temp = NULL;

while (*head)
{
next = (*head)->next;
(*head)->next_temp = prev_temp;
prev_temp = *head;
*head = next_temp;
}

*head = prev_temp;

return (*head);
}

