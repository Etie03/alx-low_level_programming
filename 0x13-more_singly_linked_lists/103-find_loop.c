#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list
 * @head: head of linked list to search for
 *
 * Return: the address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *first = head;
listint_t *sec = head;

if (!head)
return (NULL);

while (first && sec && sec->next)
{
sec = sec->next->next;
first = first->next;
if (sec == first)
{
first = head;
while (first != sec)
{
first = first->next;
sec = sec->next;
}
return (sec);
}
}

return (NULL);
}
