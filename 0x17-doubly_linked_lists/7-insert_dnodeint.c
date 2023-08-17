#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: ptr tp the first node
 * @idx: new node pos
 * @n: data
 * Return: NewN
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newN = malloc(sizeof(dlistint_t));
	dlistint_t *c = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	if (newN == NULL)
		return (NULL);

	newN->n = n;
	newN->next = NULL;
	newN->prev = NULL;
	if (idx == 0)
	{
		if (*h != NULL)
			(*h)->prev = newN;
		newN->next = *h;
		*h = newN;
		return (newN);
	}
		while (c != NULL && i < idx - 1)
		{
			c = c->next;
			i++;
		}
		if (c == NULL)
		{
			free(c);
			return (NULL);
		}
		newN->prev = c;
		newN->next = c->next;
		if (c->next != NULL)
		{
			c->next->prev = newN;
		}
		c->next = newN;
		return (newN);
}
