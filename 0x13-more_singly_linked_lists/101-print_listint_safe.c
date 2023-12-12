#include "lists.h"

/**
 * print_listint_safe - function that prints a linked list
 * @head: pointer to the head
 *
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t m = 0;
	listint_t *fau = (void *)head, *test = 0;
	int flag = 0;

	while (fau != NULL)
	{
		if (flag == 0)
		{
			test = fau;
			printf("[%p] %d\n", (void *)fau, fau->n);
		}
		if (flag == 1)
		{
			if (test <= fau)
			{
				printf("-> [%p] %d\n", (void *)fau, fau->n);
				return (m);
			}
			printf("[%p] %d\n", (void *)fau, fau->n);
		}
		m += 1;
		test = fau;
		fau = fau->next;
		flag = 1;
	}
	return (m);
}
