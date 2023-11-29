#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function that create a new dog
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Return: the pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int m = 0, f = 0, k;
	dog_t *p;

	if (name == NULL || owner == NULL)
		return (NULL);
	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	while (name[m])
	{
		m++;
	}
	while (owner[f])
	{
		f++;
	}
	p->name = malloc(sizeof(char) * (m + 1));
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}
	p->age = age;
	p->owner = malloc(sizeof(char) * (f + 1));
	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	for (k = 0; k <= m; k++)
	{
		p->name[k] = name[k];
	}
	for (k = 0; k <= f; k++)
	{
		p->owner[k] = owner[k];
	}
	return (p);
}
